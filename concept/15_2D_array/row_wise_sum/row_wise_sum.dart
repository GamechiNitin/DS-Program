void main() {
  List<List<int>> arr = [
    [3, 4, 11],
    [2, 12, 1],
    [7, 8, 7]
  ];

  for (var element in arr) {
    int sum = element.fold(0, (p, e) => p + e);
    print("$element => sum is $sum");
  }
}
