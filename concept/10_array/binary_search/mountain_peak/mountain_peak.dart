void main() {
  List<int> arr = [0, 10, 5, 2];

  int result = findPeak(arr, arr.length);
  print("Index $result value is ${arr[result]}");
}

int findPeak(List<int> arr, int index) {
  int start = 0;
  int end = index - 1;
  int mid = start + (end - start) ~/ 2;

  while (start < end) {
    // condition 1
    if (arr[mid] < arr[mid + 1]) {
      start = mid + 1;
    } else {
      end = mid;
    }
    mid = start + (end - start) ~/ 2;
  }
  return start;
}
