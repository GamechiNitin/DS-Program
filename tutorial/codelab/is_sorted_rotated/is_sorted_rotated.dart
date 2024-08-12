void main() {
  List<int> arr = [5, 2, 3, 4, 1, 9];
  List<int> arr2 = [3, 4, 5, 1, 2];
  List<int> arr3 = [1, 2, 3, 4, 5];
  List<int> arr4 = [1, 1, 1, 1, 1];
  int n = 6;
  int n2 = 5;

  bool value = isSortedRotated(arr, n);
  print("O/p 1 : $value");

  bool value2 = isSortedRotated(arr2, n2);
  print("O/p 2 : $value2");

  bool value3 = isSortedRotated(arr3, n2);
  print("O/p 3 : $value3");

  bool value4 = isSortedRotated(arr4, n2);
  print("O/p 4 : $value4");
}

bool isSortedRotated(List<int> data, int n) {
  int isSorted = 0;

  for (var i = 1; i < n; i++) {
    if (data[i - 1] > data[i]) {
      isSorted++;
    }
  }

  if (data[n - 1] > data[0]) {
    isSorted++;
  }

  return isSorted <= 1;
}
