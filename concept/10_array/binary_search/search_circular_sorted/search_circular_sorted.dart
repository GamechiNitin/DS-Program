void main() {
  List<int> pivotList = [8, 10, 17, 1, 3];
  int n = pivotList.length;
  int key = 17;

  int pivotIndex = getPivot(pivotList);
  print("Pivot index is $pivotIndex , value is ${pivotList[pivotIndex]} ");

  if (key >= pivotList[pivotIndex] && key <= pivotList.last) {
    int searchIndex = binarySearch(pivotList, pivotIndex, n - 1, key);
    print("Pivot index is $searchIndex , value is ${pivotList[searchIndex]} ");
  } else {
    int searchIndex = binarySearch(pivotList, 0, pivotIndex - 1, key);
    print("Pivot index is $searchIndex , value is ${pivotList[searchIndex]} ");
  }
}

int getPivot(List<int> data) {
  int start = 0;
  int end = data.length - 1;
  int mid = start + (end - start) ~/ 2;

  while (start < end) {
    if (data[mid] >= data[0]) {
      start = mid + 1;
    } else {
      end = mid;
    }
    mid = start + (end - start) ~/ 2;
  }
  return start;
}

int binarySearch(List<int> data, int start, int end, int key) {
  // int start = 0;
  // int end = data.length - 1;
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
