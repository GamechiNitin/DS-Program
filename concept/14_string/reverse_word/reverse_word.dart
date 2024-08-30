void main() {
  // Reverse Word
  // ym eman si nitin
  String s = "my name is test nitin gamechi";
  int start = 0;

  String rSubString = '';
  int size = s.length;
  s = s + " ";
  for (int i = 1; i <= size; i++) {
    if (s[i] == ' ' || i == size) {
      int end = i;

      String substring = s.substring(start, end);
      String reversedWord = substring.split('').reversed.join();
      rSubString += reversedWord + " ";
      start = i + 1;
    }
    print(rSubString);
  }

  print(rSubString);
}
