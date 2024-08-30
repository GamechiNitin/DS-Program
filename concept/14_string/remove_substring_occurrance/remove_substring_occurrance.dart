void main() {
  // Leet Code 1910
  String s = "daabcbaabcbc";
  String part = "abc";

  print(s);
  while (s.length != 0 && s.contains(part)) {
    s = s.replaceAll(part, '');
    print(s);
  }

  print(s);
  /*
    i/o : daabcbaabcbc
    o/p : dab
    */
}
