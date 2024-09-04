bool isPalindrome(String s, int i, int end) {
  if (i > end) {
    return true;
  }

  if (s[i] != s[end]) {
    return false;
  } else {
    // i++;
    // end--;
    return isPalindrome(s, i + 1, end - 1);
  }
}

void main() {
  String s = "MOM";

  bool v = isPalindrome(s, 0, s.length - 1);

  if (v) {
    print("It's Palindrome");
  } else {
    print("It not Palindrome");
  }
}
