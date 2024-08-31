import 'dart:io';

void main() {
  List<List<int>> arr = [
    [3, 4, 11, 44],
    [2, 12, 1, 66],
    [7, 8, 7, 88],
    [3, 2, 3, 99]
  ];

  for (var element in arr) {
    int sum = element.fold(0, (p, e) => p + e);
    print("$element => sum is $sum");
  }

  for (int col = 0; col < 4; col++) {
    if (col.isEven) {
      for (int row = 0; row < 4; row++) {
        // print(arr[row][col]);
        stdout.write(arr[row][col]);
        stdout.write(" ");
      }
    } else {
      for (int row = 3; row >= 0; row--) {
        stdout.write(arr[row][col]);
        stdout.write(" ");
      }
    }
    stdout.write("| ");
  }
}
