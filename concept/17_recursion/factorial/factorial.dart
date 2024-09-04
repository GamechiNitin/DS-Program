import 'dart:io';

int factorial(int m) {
  if (m == 1) {
    return 1;
  }

  int small = factorial(m - 1);
  int big = m * small;

  return big;
}

void main() {
  print("Enter the number");
  int n = int.parse(stdin.readLineSync()!);

  int ans = factorial(n);

  print("Factorial  of $n is $ans");
}
