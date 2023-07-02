import 'dart:io';

void main() {
  /*
    Fibonacci Series : Sum last two number is Next Digit.
    0   1   1   2   3   5   8   13  21  ...
    */
  int n = int.parse(stdin.readLineSync()!);

  int a = 0;
  int b = 1;

  int c = 0;
  for (var i = 0; i < n; i++) {
    stdout.write(c.toString() + " ");
    c = a + b;
    b = a;
    a = c;
  }
}
