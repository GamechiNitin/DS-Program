void main() {
  List<int> data = [5, 4, 3, 7, 9, 5];
  List<int> odd = [4, 54, 33, 77, 49];
  print(data);

  for (var i = 0; i < data.length; i = i + 2) {
    int a = data[i];
    int b = data[i + 1];
    int x = i;
    int y = i + 1;
    data.removeAt(x);
    data.insert(x, b);
    data.removeAt(y);
    data.insert(y, a);
  }

  print(data);

  for (var i = 0; i < odd.length; i = i + 2) {
    if (i + 1 < odd.length) {
      int a = odd[i];
      int b = odd[i + 1];
      int x = i;
      int y = i + 1;
      odd.removeAt(x);
      odd.insert(x, b);
      odd.removeAt(y);
      odd.insert(y, a);
    }
  }

  print(odd);
}
