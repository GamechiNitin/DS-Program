int sum(List<int> arr, int size) {
  if (size == 0) {
    return 0;
  }

  int big = arr[0] + sum(arr.skip(1).toList(), size - 1);

  return big;
}

void main() {
  List<int> arr = [3, 2, 5, 1, 6];

  int result = sum(arr, 5);
  print(result);
}
