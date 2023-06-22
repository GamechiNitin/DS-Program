import 'dart:io';

void main() {
     /* 
        1
        2   2
        3   3   3
        4   4   4   4
    */    

  int n = int.parse(stdin.readLineSync()!);
  int i = 1;

  while (i <= n) {
    int j = 1;
    while (j <= i) {
      stdout.write(i.toString() + " ");
      j++;
    }
    stdout.writeln();
    i++;
  }
}
