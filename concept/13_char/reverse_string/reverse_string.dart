import 'dart:io';

void main() {
  print("Enter your name : ");
  String? name = stdin.readLineSync();
  print("Your Name is $name");

  // print("Enter your surname : ");
  // int? surname = stdin.readByteSync();
  // print("Your Surname is $surname");

  final val = name?.split("").toList().reversed.join();

  print("Reverse Name is $val");
}

void swap(int name, int name2) {}
