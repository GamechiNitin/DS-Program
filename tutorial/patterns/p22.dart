import 'dart:io';

void main() {
  /*
        1   2   3   4
            2   3   4
                3   3
                    4
    */

  int n = int.parse(stdin.readLineSync()!);
  int i = 1;

  while (i <= n) {
    int space = i - 1;
    int j = 1;
    while (j <= space) {
      stdout.write(" ");
      space--;
    }

    while (j <= n - i + 1) {
      stdout.write(i + j - 1);
      j++;
    }
    stdout.writeln();
    i++;
  }
}
