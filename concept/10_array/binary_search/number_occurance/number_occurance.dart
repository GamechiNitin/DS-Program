import 'dart:io';

void main() {
  /*
  Find index of Given Key 
  op -  Enter search key 1 : 
        8
        Enter search key 2 : 
        3
        Result for 8 is index 2 | 3
        Result for 3 is index 2 | 5
   */
  List<int> even = [2, 5, 8, 8, 9, 12];
  List<int> odd = [1, 2, 3, 3, 3, 3, 5];
  print("Enter search key 1 : ");

  int key = int.parse(stdin.readLineSync() ?? '0');
  print("Enter search key 2 : ");
  int key2 = int.parse(stdin.readLineSync() ?? '0');

  int result = leftOccurance(even, key);
  int result2 = rightOccurance(even, key);

  int result3 = leftOccurance(odd, key2);
  int result4 = rightOccurance(odd, key2);

  print("Result for $key is index $result | $result2");
  print("Result for $key2 is index $result3 | $result4");
}

int leftOccurance(List<int> data, int key) {
  int start = 0;
  int end = data.length - 1;
  int median = start + (end - start) ~/ 2;
  int answer = -1;

  while (start <= end) {
    int valueMedian = data[median];
    if (valueMedian == key) {
      answer = median;
      end = median - 1;
    } else if (key > valueMedian) {
      start = median + 1;
    } else {
      end = median - 1;
    }

    median = start + (end - start) ~/ 2;
  }

  return answer;
}

int rightOccurance(List<int> data, int key) {
  int start = 0;
  int end = data.length - 1;
  int median = start + (end - start) ~/ 2;
  int answer = -1;

  while (start <= end) {
    int valueMedian = data[median];
    if (valueMedian == key) {
      answer = median;
      start = median + 1;
    } else if (key > valueMedian) {
      start = median + 1;
    } else {
      end = median - 1;
    }

    median = start + (end - start) ~/ 2;
  }

  return answer;
}
