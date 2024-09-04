import 'dart:io';

void main() {
  print("Enter number : ");
  int input = int.parse(stdin.readLineSync()!);

  int result = powerOf(input);

  print("Number is $input result is $result");
}

int powerOf(int n) {
  if (n == 0) {
    return 1;
  }

  int small = powerOf(n - 1);
  int result = 2 * small;

  return result;
}
