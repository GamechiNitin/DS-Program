import 'dart:io';

void main() {
  /*
       1
      22
     333
    4444
  */
  int n = int.parse(stdin.readLineSync()!);
  int i = 1;

  while (i <= n) {
    int space = n - i;
    int j = 1;
    while (j <= space) {
      stdout.write(" ");
      space--;
    }
    while (j <= i) {
      stdout.write(i);
      j++;
    }
    stdout.writeln();
    i++;
  }
}
