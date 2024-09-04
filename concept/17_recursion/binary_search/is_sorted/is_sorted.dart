bool isSorted(List<int> arr, int length) {
  print("ss $arr");

  if (length == 0 || length == 1) {
    return true;
  }

  if (arr[0] > arr[1]) {
    return false;
  } else {
    bool ans = isSorted(arr.skip(1).toList(), length - 1);
    print(arr);
    return ans;
  }
}

void main() {
  List<int> arr = [1, 3, 4, 5, 8]; // Sorted
  List<int> arr2 = [1, 3, 4, 50, 8]; // Not Sorted

  bool isSort = isSorted(arr, 5);
  bool isSort2 = isSorted(arr2, 5);
  if (isSort) {
    print("Sorted");
  } else {
    print("Not Sorted");
  }
  if (isSort2) {
    print("Sorted");
  } else {
    print("Not Sorted");
  }
}
