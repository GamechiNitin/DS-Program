void main() {
  int row = 3;
  int col = 3;
  List<List<int>> arr = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9],
  ];
  for (var e in arr) {
    print(e);
  }
  print("After 90 ");
  for (int i = 0; i < row; i++) {
    for (int j = 0; j <= i; j++) {
      int a = arr[i][j];
      int b = arr[j][i];
      arr[i][j] = b;
      arr[j][i] = a;
    }
  }
  for (int j = 0; j < row; j++) {
    int a = arr[j][0];
    int b = arr[j][col - 1];
    arr[j][0] = b;
    arr[j][col - 1] = a;
  }

  for (var e in arr) {
    print(e);
  }
}
