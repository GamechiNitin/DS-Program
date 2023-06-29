import 'dart:io';

void main() {
  /*
    1   2   3   4   5   5   4   3   2   1
    1   2   3   4   *   *   4   3   2   1
    1   2   3   *   *   *   *   3   2   1
    1   2   *   *   *   *   *   *   2   1
    1   *   *   *   *   *   *   *   *   1
    */
  int value = int.parse(stdin.readLineSync()!);
  int i = 1;

  while (i <= value) {
    int j = 1;
    // 1 Number loop
    while (j <= value - i + 1) {
      stdout.write(j);
      j++;
    }

    // 2 Star loop
    int star1 = i - 1;
    while (star1 != 0) {
      stdout.write("*");
      stdout.write("*");
      star1--;
    }
    // 3 Star loop
    // int star2 = i - 1;
    // while (star2 != 0) {
    //   stdout.write("*");
    //   star2--;
    // }

    // 4 Number loop
    int k = 1;
    int loop = value - i + 1;
    while (k <= loop) {
      final data = loop - k + 1;
      stdout.write(data);
      k++;
    }
    stdout.writeln();
    i++;
  }
}
