void main() {
  List<int> arr = [1, 3, 7, 9, 11, 13, 17, 23];
  List<int> arr2 = [2, 4, 6, 8, 10];

  solution1(arr, arr2);
}

void solution1(arr, arr2) {
  int n = arr.length;
  int m = arr2.length;
  int i = 0;
  int j = 0;
  int k = 0;
  List<int> data = [];

  while (i < n && j < m) {
    if (arr[i] < arr2[j]) {
      data.insert(k++, arr[i++]);
    } else {
      data.insert(k++, arr2[j++]);
      // data.add(arr2[j++]);
    }
  }

  while (i < n) {
    data.insert(k++, arr[i++]);
  }
  while (j < m) {
    data.insert(k++, arr2[j++]);
  }

  print(data);
}
