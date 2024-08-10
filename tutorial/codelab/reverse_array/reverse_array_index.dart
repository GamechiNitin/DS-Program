void main() {
  List<int> arr3 = [77, 7, 3, 2, 5, 8, 22, 33, 44, 66];

  solution2(arr3, 5);
}

void solution2(List<int> data, int index) {
  int start = index;
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
