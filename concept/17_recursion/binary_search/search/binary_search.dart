import 'dart:io';

void printSearch(List<int> arr, int s, int e) {
  for (var i = s; i < e; i++) {
    stdout.write(arr[i]);
    stdout.write(" ");
  }
}

bool binarySearch(List<int> arr, int s, int e, int key) {
  printSearch(arr, s, e);

  if (s > e) {
    return false;
  }

  int mid = s + (e - s) ~/ 2;
  print("Value of $mid is ${arr[mid]}");

  if (arr[mid] == key) {
    return true;
  }

  if (arr[mid] < key) {
    return binarySearch(arr, mid + 1, e, key);
  } else {
    return binarySearch(arr, s, e - 1, key);
  }
}

void main() {
  int key = 33;
  List<int> arr = [1, 3, 4, 5, 8, 10, 22, 33]; // Sorted

  print(binarySearch(arr, 0, arr.length, key));
}
