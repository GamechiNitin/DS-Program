import 'dart:io';

void main() {
  /* 
    D
    C   D
    B   C   D
    A   B   C   D
    */

  int n = int.parse(stdin.readLineSync()!);
  int i = 1;
  while (i <= n) {
    int j = 1;
    while (j <= i) {
      int value = 'A'.codeUnits.elementAt(0) + n - i + j - 1;
      stdout.write(String.fromCharCode(value) + " ");
      j++;
    }
    stdout.writeln();
    i++;
  }
}
