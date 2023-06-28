import 'dart:io';

void main() {
  /*
        1   1   1   1
            2   2   2
                3   3
                    4
    */
  int n = int.parse(stdin.readLineSync()!);
  int i = 1;
  while (i <= n) {
    int space = i - 1;
    while (i <= space) {
      stdout.write(" ");
      space--;
    }

    int j = 1;
    while (j <= n - i + 1) {
      stdout.write(i);
      j++;
    }
    stdout.writeln();
    i++;
  }
}
