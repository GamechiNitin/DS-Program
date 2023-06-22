import 'dart:io';

void main() {
  /* 
        1   2   3
        4   5   6   
        7   8   9
    */
  int n = int.parse(stdin.readLineSync()!);
  int count = 0;
  int i = 1;
  while (i <= n) {
    int j = 1;
    while (j <= n) {
      count += 1;
      stdout.write(count.toString() + " ");
      j++;
    }
    stdout.writeln();
    i++;
  }
}
