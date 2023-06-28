import 'dart:io';

void main() {
  int n = int.parse(stdin.readLineSync()!);
  int i = 1;
  int count = 1;

  while (i <= n) {
    int space = n - i;

    int j = 1;
    while (j <= space) {
      stdout.write(" ");
      space--;
    }

    while (j <= i) {
      stdout.write(count);
      count++;
      j++;
    }
    stdout.writeln();
    i++;
  }
}
