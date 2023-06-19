import 'dart:io';

void main() {
  // Taking user Input from Terminal
  int a = stdin.readByteSync();
  int b = stdin.readByteSync();
  if (a > b) {
    print("A is Greater");
  } else {
    print("B is Greater");
  }

  int marks = 33;

  // Nested if
  if (marks >= 33) {
    print("You have passed the Exam");
  } else if (marks < 33) {
    print("You have failed the Exam");
  } else {
    print("Result not available");
  }
}
