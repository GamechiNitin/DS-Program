import 'dart:io';

void main() {
  /*
        A
        B   B
        C   C   C
        D   D   D   D
    */

  int n = int.parse(stdin.readLineSync()!);
  int i = 1;
  while (i <= n) {
    int j = 1;
    while (j <= i) {
      int value = "A".codeUnits.elementAt(0) + i - 1;
      stdout.write(String.fromCharCode(value) + " ");
      j++;
    }
    stdout.writeln();
    i++;
  }
}
