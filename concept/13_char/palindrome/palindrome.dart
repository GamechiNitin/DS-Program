import 'dart:io';

void main() {
  print("Enter value : ");
  String? name = stdin.readLineSync();

  print(name?.reversed);
  print(name?.isPalindrome);
}

bool isPalindromeString(String name) {
  return name.split('').toList().reversed == name;
}

extension StringUtilities on String {
  // Method to reverse a string
  String get reversed {
    return this.split('').reversed.join('');
  }

  // Method to check if the string is a palindrome
  bool get isPalindrome {
    return this.toLowerCase() == this.reversed.toLowerCase();
  }
}
