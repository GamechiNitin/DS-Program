String reverseString(String temp, int startIndex, int endIndex) {
  if (startIndex > endIndex) {
    return temp;
  }

  // Swap
  List<String> dex = temp.split("").toList();
  String a = dex.elementAt(startIndex);
  String b = dex.elementAt(endIndex);

  dex[startIndex++] = b;
  dex[endIndex--] = a;
  temp = dex.map((e) => e).join();

  print(temp);

  return reverseString(temp, startIndex, endIndex);
}

void main() {
  String s = "abcdef";

  String object = reverseString(s, 0, s.length - 1);
  print(object);
}
