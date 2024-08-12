void main() {
  List<int> arr = [5, 2, 3, 4, 8, 9];
  int n = 6;
  int k = 3;

  rotateArray(arr, n, k);
}

void rotateArray(List<int> arr, int n, int k) {
  List<int> data = List.generate(n, (index) => 0);

  for (var i = 0; i < arr.length; i++) {
    int j = (i + k) % n;
    data[j] = arr[i];
  }

  print(arr);
  print(data);
}
