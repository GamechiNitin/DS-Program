import 'dart:io';

void main() {
   /* Pattern 1 : 
        *   *   *
        *   *   * 
        *   *   *
  */
  int a = int.parse(stdin.readLineSync() ?? "0");
  int i = 1;

  while (i <= a) {
    int j = 1;
    while (j <= a) {
      stdout.write("*" + " ");
      j++;
    }
    stdout.writeln();
    i++;
  }
}
