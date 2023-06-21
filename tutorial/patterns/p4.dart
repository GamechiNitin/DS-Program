import 'dart:io';

void main() {
  /* 
        4   3   2   1
        4   3   2   1
        4   3   2   1
        4   3   2   1
    */

  int n = int.parse(stdin.readLineSync()!);
  int i = 1;
  while (i <= n) {
    int j = 1;
    while (j <= n) {
      stdout.write("${n - j + 1} ");
      j++;
    }
    stdout.writeln();
    i++;
  }
}
