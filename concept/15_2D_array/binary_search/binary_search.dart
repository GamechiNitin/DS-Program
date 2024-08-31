import 'dart:io';

void main() {
  List<List<int>> arr = [
    [1, 3, 5, 7],
    [10, 11, 16, 20],
    [22, 23, 30, 60],
  ];

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      stdout.write(arr[i][j]);
      stdout.write(" ");
    }
    stdout.writeln(" ");
  }

  int row = 3;
  int col = 4;
  int target = 17;

  int start = 0;
  int end = row * col - 1;

  int mid = start + (end - start) ~/ 2;

  bool isPresent = false;

  while (start <= end) {
    int e = arr[mid ~/ col]
        [mid % col]; // To access Element in 2D Matrix if we have mid

    if (e == target) {
      isPresent = true;
      break;
    }

    if (e < target) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
    mid = start + (end - start) ~/ 2;
  }

  if (isPresent) {
    print("Present");
  } else {
    print("Not Present");
  }
}
