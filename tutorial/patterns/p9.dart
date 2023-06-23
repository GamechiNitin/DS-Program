import 'dart:io';

void main() {
  /* 
     1
     2  3
     3  4  5   
     4  5   6   7
    */

  int n = int.parse(stdin.readLineSync()!);
  int i = 1;
  while (i <= n) {
    int count = i;
    int j = 1;
    while (j <= i) {
      stdout.write(count.toString() + " ");
      count += 1;
      j++;
    }
    stdout.writeln();
    i++;
  }
  
  stdout.writeln();

  int x = 1;
  while (x <= n) {
    int j = 1;
    while (j <= x) {
      var value = x + j - 1;
      stdout.write(value.toString() + " ");

      j++;
    }
    stdout.writeln();
    x++;
  }
}
