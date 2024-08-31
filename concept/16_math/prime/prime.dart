import 'dart:io';

void main() {
  int count = 0;
  int n = 40;
  List<bool> prime = List.generate(n, (index) => true);
  prime[0] = prime[1] = false;

  for (int i = 2; i < n; i++) {
    if (prime[i]) {
      count++;
      for (int j = 2 * i; j < n; j = j + i) {
        prime[j] = false;
      }
    }
  }

  for (int i = 2; i < prime.length; i++) {
    if (prime[i]) {
      stdout.write(i);
      stdout.write(" ");
    }
  }

  print("\nCount is $count");
}
