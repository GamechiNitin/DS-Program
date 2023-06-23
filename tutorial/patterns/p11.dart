import 'dart:io';

void main() {
  /*
    A A A A 
    B B B B 
    C C C C 
    D D D D 
   */

  int n = int.parse(stdin.readLineSync()!);
  int row = 1;
  while (row <= n) {
    int column = 1;

    while (column <= n) {
      int val = "A".codeUnits.elementAt(0) + row - 1;
      stdout.write(String.fromCharCode(val) + " ");
      column++;
    }
    stdout.writeln();
    row++;
  }
}
