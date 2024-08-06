void main() {
  List<int> data = [10, 8, 2, 3, 7, 1];

  int n = data.length;
  for (var i = 1; i < n; i++) {
    for (var j = 0; j < n - i; j++) {
      int a = data[j];
      int b = data[j + 1];
      if (a > b) {
        data[j] = b;
        data[j + 1] = a;
      }
    }
    print("Round $i => ${data}");
  }

  print("Ans : ${data}");
}
