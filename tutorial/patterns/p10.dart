import 'dart:io';

void main() {
  /*
      1 
      2 1
      3 2 1
      4 3 2 1
   */

  int n = int.parse(stdin.readLineSync()!);
  int i = 1;
  while (i <= n) {
    int j = 1;
    while (j <= i) {
      int val = i - j + 1;
      stdout.write(val.toString() + " ");
      j++;
    }
    stdout.writeln();
    i++;
  }
}
