import 'dart:io';

void main() {
  // for loop Ex.
  stdout.write("For loop : ");
  for (int i = 0; i < 5; i++) {
    stdout.write(i.toString() + " ");
  }

  // While loop Ex.
  stdout.write("\nWhile loop : ");

  int j = 0;
  while (j < 5) {
    stdout.write(j.toString() + " ");
    j++;
  }

  // do-while loop Ex.
  stdout.write("\nDo-while loop : ");
  int k = 0;
  do {
    stdout.write(k.toString() + " ");
    k++;
  } while (k < 5);
}
