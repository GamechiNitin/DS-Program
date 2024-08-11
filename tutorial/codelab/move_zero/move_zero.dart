void main() {
  int start = 0;
  List<int> arr = [0, 1, 0, 5, 0, 8, 7, 9];

  for (var i = 0; i < arr.length; i++) {
    if (arr[i] != 0) {
      int a = arr[i];
      int b = arr[start];

      arr[i] = b;
      arr[start] = a;
      start++;
    }
  }

  print(arr);
}
