void main() {
  List<int> data = [4, 2, 6, 7, 15, 18, 12];

  List<int> res = bubbleSort(data, data.length - 1);
  print(res);
}

List<int> bubbleSort(List<int> data, int size) {
  print("$size : $data");
  if (size == 0 || size == 1) {
    return data;
  }

  // Processing

  for (var i = 0; i < size; i++) {
    if (data[i] > data[i + 1]) {
      int a = data[i];
      int b = data[i + 1];
      data[i] = b;
      data[i + 1] = a;
    }
  }

  return bubbleSort(data, size - 1);
}
