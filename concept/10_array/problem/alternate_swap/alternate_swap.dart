void main() {
  List<int> data = [5, 4, 3, 7, 9, 5];
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
}

void swap(int a, int b) => b = a;
