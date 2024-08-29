void main() {
  String name = "A man, a plan, a camel: Panama";
  String name2 = "A man, a plan, a canal: Panama";

  String result = validString(name);
  String result2 = validString(name2);
  print(result);
  print(result.isPalindrome);
  print(result2.isPalindrome);
}

String validString(String name) {
  List<String> temp = [];

  List<String> data = name.trim().split('').toList();
  data.forEach((element) {
    if (validChar(element)) {
      temp.add(element.toLowerCase());
    }
  });

  String data2 = temp.map((e) => e).join('');

  return data2;
}

bool validChar(String name) {
  if ((name.codeUnitAt(0) >= "A".codeUnitAt(0) &&
          name.codeUnitAt(0) <= "Z".codeUnitAt(0)) ||
      (name.codeUnitAt(0) >= "a".codeUnitAt(0) &&
          name.codeUnitAt(0) <= "z".codeUnitAt(0)) ||
      (name.codeUnitAt(0) >= "0".codeUnitAt(0) &&
          name.codeUnitAt(0) <= "9".codeUnitAt(0))) {
    return true;
  }
  return false;
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
