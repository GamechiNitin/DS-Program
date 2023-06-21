import 'dart:io';

void main() {
  /* 
        1   2   3   4
        1   2   3   4
        1   2   3   4
        1   2   3   4
    */

  int n = int.parse(stdin.readLineSync()!);
  int i = 1;
  while (i <= n) {
    int j = 1;
    while (j <= n) {
      stdout.write("$j ");
      j++;
    }
    stdout.writeln();
    i++;
  }
}
