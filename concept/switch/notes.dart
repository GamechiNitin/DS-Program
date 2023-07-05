import 'dart:io';

void main() {
  int n = int.parse(stdin.readLineSync()!);
  int count = 0;
  int count100 = 0;
  int count50 = 0;
  int count20 = 0;
  int count10 = 0;
  int count1 = 0;

  switch (1) {
    case 1:
      {
        count100 = n ~/ 100;
        count = count100;
        n = n % 100;
      }
      continue next;
    next:
    case 2:
      count50 = n ~/ 50;
      count = count + count50;
      n = n % 50;
      print(n);
      continue next1;
    next1:
    case 3:
      count20 = n ~/ 20;
      count = count + count20;
      n = n % 20;
      print(n);
      continue next2;
    next2:
    case 4:
      count10 = n ~/ 10;
      count = count + count10;
      n = n % 10;
      print(n);
      continue next3;
    next3:
    case 5:
      count1 = n ~/ 1;
      count = count + count1;
      break;
    default:
  }

  stdout.writeln("Total notes count is $count");
  stdout.writeln("Total 100 notes count is $count100");
  stdout.writeln("Total 50 notes count is $count50");
  stdout.writeln("Total 20 notes count is $count20");
  stdout.writeln("Total 10 notes count is $count10");
  stdout.writeln("Total 1 notes count is $count1");
}
