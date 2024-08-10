void main() {
  List<int> arr = [1, 3, 2, 4];
  List<int> arr2 = [45, 5, 23, 78, 77];
  List<int> arr3 = [77, 7, 3, 2, 5, 8, 22, 33, 44, 66];

  print("Solution 1 => ${arr.reversed.toList()}");
  solution2(arr2);
}

void solution2(List<int> data) {
  int start = 0;
  int end = data.length - 1;

  while (start < end) {
    if (start == end) {
      break;
    } else {
      int a = data[start];
      int b = data[end];
      data[start] = b;
      data[end] = a;
      start++;
      end--;
    }
  }

  print("Solution 1 => ${data}");
}
