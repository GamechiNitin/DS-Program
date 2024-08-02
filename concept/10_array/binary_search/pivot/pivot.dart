void main() {
  List<int> pivotList = [8, 10, 17, 1, 3];

  int result = getPivot(pivotList);
  print("Pivor index is $result , value is ${pivotList[result]} ");
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
