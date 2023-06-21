import 'dart:io';

void main() {
  /* Pattern 1 : 
        1   1   1
        2   2   2 
        3   3   3
  */

  int input = int.parse(stdin.readLineSync() ?? "0");
  int i = 1;
  while (i <= input) {
    int j = 1;
    while (j <= input) {
      stdout.write(i.toString() + " ");
      j++;
    }
    stdout.writeln();
    i++;
  }
}
