void main() {
  List<List<int>> arr = [
    [1, 4, 7, 11, 15],
    [2, 5, 8, 12, 19],
    [3, 6, 9, 16, 32],
    [10, 13, 14, 17, 24],
  ];

  int row = 4;
  int col = 5;

  int rowIndex = 0;
  int colIndex = col - 1;

  int target = 5;
  bool isPresent = false;

  while (rowIndex < row && colIndex >= 0) {
    int element = arr[rowIndex][colIndex];

    if (element == target) {
      isPresent = true;
      break;
    }

    if (element < target) {
      rowIndex++;
    } else {
      colIndex--;
    }
  }

  if (isPresent) {
    print("Present");
  } else {
    print("Not Present");
  }
}
