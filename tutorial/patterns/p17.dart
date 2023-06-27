import 'dart:io';

void main() {
  /*
                    *
                *   *
            *   *   * 
        *   *   *   * 
    
    */

  int n = int.parse(stdin.readLineSync()!);
  int i = 1;
  while (i <= n) {
    int j = 1;
    int space = n - i;
    while (j <= space) {
      stdout.write(" ");
      space--;
    }
    while (j <= i) {
      stdout.write("*");
      j++;
    }
    stdout.writeln();
    i++;
  }
}
