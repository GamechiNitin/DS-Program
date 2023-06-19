import 'dart:io';

void main() {
  print("Enter your name : ");
  String? readName = stdin.readLineSync();

  while (readName != null) {
    name(readName);
    break;
  }
}

// Condition
bool isDone() {
  return false;
}

name(String name) {
  print("Hey" + " " + name);
}
