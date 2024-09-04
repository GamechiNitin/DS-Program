import 'dart:io';

void main() {
  print("Enter number : ");
  int n = int.parse(stdin.readLineSync()!);
  sayDigits(n);
}

void sayDigits(int n) {
  List<String> arr = [
    "zero",
    "one",
    "two",
    "three",
    "four",
    "five",
    "six",
    "seven",
    "eight",
    "nine",
  ];

  if (n % 10 == 0) {
    return;
  }

  int digit = n % 10;
  n = n ~/ 10;

  sayDigits(n);

  stdout.write(arr[digit]);
  stdout.write(" ");
  return;
}
