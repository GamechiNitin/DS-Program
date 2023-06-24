import 'dart:io';

void main() {
  /*
    A
    B   C
    D   E   F
    G   H   I   J
    */
  int n = int.parse(stdin.readLineSync()!);
  int i = 1;
  int count = 0;
  while (i <= n) {
    int j = 1;
    while (j <= i) {
      int value = 'A'.codeUnits.elementAt(0) + count;
      stdout.write(String.fromCharCode(value) + " ");
      count++;
      j++;
    }
    stdout.writeln();
    i++;
  }
}
