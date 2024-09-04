import 'dart:io';

int stair(int s) {
  if (s < 0) {
    return 0;
  }
  if (s == 0) {
    return 1;
  }

  int res = stair(s - 1) + stair(s - 2);

  return res;
}

void main() {
  print("Enter n : ");
  int n = int.parse(stdin.readLineSync()!);

  int ways = stair(n);
  print("N is : $n  result is $ways ");
}
