import 'dart:io';

void main() {
  /*
    Q : Reverse Integer
    Input : 321
    Output : 123

    Logic - Ans = (ans * 10) + digit
 */

  int n = int.parse(stdin.readLineSync()!);
  int ans = 0;

  while (n % 10 != 0) {
    int digit = n % 10;

    if (ans.isInfinite) {
      print("Out of Range");
      break;
    }
    ans = (ans * 10) + digit;

    n = n ~/ 10;
  }
  print(ans);
}
