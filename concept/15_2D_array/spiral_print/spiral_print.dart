void main() {
  List<List<int>> data = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
  ];

  for (var v in data) {
    print(v);
  }
  int r = 3;
  int c = 3;
  int count = 0;
  int total = r * c;

  int starRow = 0;
  int starCol = 0;
  int endRow = r - 1;
  int endCol = c - 1;

  List<int> newData = [];

  while (count < total) {
    // Start Row
    for (var i = starCol; count < total && i <= endCol; i++) {
      int value = data[starRow][i];
      newData.add(value);
      count++;
    }
    starRow++;

    for (var i = starRow; count < total && i <= endRow; i++) {
      int value = data[i][endCol];
      newData.add(value);
      count++;
    }
    endCol--;

    for (var i = endCol; count < total && i >= starCol; i--) {
      int value = data[endRow][i];
      newData.add(value);
      count++;
    }
    endRow--;

    for (var i = endRow; count < total && i >= starRow; i--) {
      int value = data[i][starCol];
      newData.add(value);
      count++;
    }
    starCol++;
  }

  print(newData);
}
