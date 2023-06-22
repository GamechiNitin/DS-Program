import 'dart:io';

void main() {
  /* 
    *
    * * 
    * * *
    * * * *
  */

  int n = int.parse(stdin.readLineSync()!);
  int i = 1;

  while (i <= n) {
    int j = 1;
    while (j <= i) {
      stdout.write("*" + " ");
      j++;
    }
    stdout.writeln();
    i++;
  }
}
