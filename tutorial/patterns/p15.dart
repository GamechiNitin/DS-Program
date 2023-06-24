import 'dart:io';

void main() {
  /* 
    A  
    B   C
    C   D   E
    D   E   F   G
    */

  int n = int.parse(stdin.readLineSync()!);
  int i = 1;
  while (i <= n) {
    int j = 1;
    while (j <= i) {
      int value = 'A'.codeUnits.elementAt(0) + i + j - 2;
      stdout.write(String.fromCharCode(value) + " ");
      j++;
    }
    stdout.writeln();
    i++;
  }
}
