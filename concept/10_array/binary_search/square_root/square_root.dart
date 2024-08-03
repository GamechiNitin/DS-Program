import 'dart:io';

void main() {
  print("Enter value : ");
  int value = int.parse(stdin.readLineSync() ?? "0");
  squareRootLength(value);
}

void squareRootLength(int value) {
  List<int> sqList = [];
  for (var i = 0; i < value; i++) {
    sqList.add(i);
  }

  int result = binary(sqList, value);
  double result2 = precession(value, result);
  print("Result ${result2.toStringAsPrecision(4)}");
}

int binary(List<int> sqList, int value) {
  int start = 0;
  int end = sqList.length - 1;
  int mid = start + (end - start) ~/ 2;
  int ans = -1;

  while (start <= end) {
    int square = mid * mid;
    if (square == value) {
      return mid;
    } else if (square < value) {
      ans = mid;
      start = mid + 1;
    } else {
      end = mid - 1;
    }
    mid = start + (end - start) ~/ 2;
  }

  return ans;
}

double precession(int n, int previous) {
  double factor = 1;
  double ans = previous.toDouble();

  for (var i = 0; i < 3; i++) {
    factor = factor / 10;
    for (double j = ans; j * j < n; j = j + factor) {
      ans = j;
      print(j);
    }
  }
  return ans;
}
