import 'dart:io';

void main() {
  /* 
    A   B   C
    B   C   D
    C   D   E
  */

  int n = int.parse(stdin.readLineSync()!);
  int i = 1;
  while (i <= n) {
    int j = 1;
    while (j <= n) {
      int value = "A".codeUnits.elementAt(0) + i - 2 + j;
      stdout.write(String.fromCharCode(value) + " ");
      j++;
    }
    stdout.writeln();
    i++;
  }
}
