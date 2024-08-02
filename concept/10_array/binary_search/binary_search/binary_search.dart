import 'dart:io';

void main() {
  /*
  Find index of Given Key
   */
  List<int> even = [2, 5, 6, 8, 9, 12];
  List<int> odd = [3, 4, 7, 8, 10, 11, 14];
  print("Enter search key 1 : ");

  int key = int.parse(stdin.readLineSync() ?? '0');
  print("Enter search key 2 : ");
  int key2 = int.parse(stdin.readLineSync() ?? '0');

  int result = findIndex(even, key);
  int result2 = findIndex(odd, key2);

  if (result == -1) {
    print("$key not found!");
  } else {
    print("Result for $key is index $result");
  }

  if (result2 == -1) {
    print("$key2 not found!");
  } else {
    print("Result for $key2 is index $result2");
  }
}

int findIndex(List<int> data, int key) {
  int start = 0;
  int end = data.length - 1;
  int median = start + (end - start) ~/ 2;

  while (start <= end) {
    int valueMedian = data[median];
    if (valueMedian == key) {
      return median;
    }

    if (key > valueMedian) {
      start = median + 1;
    } else {
      end = median - 1;
    }

    median = start + (end - start) ~/ 2;
  }

  return -1;
}
