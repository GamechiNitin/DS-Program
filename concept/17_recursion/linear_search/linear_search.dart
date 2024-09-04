import 'dart:io';

bool sum(List<int> arr, int size, int key) {
  if (size == 0) {
    return false;
  }

  if (arr[0] == key) {
    return true;
  }

  bool big = sum(arr.skip(1).toList(), size - 1, key);

  return big;
}

void main() {
  print("Enter key to search");
  int key = int.parse(stdin.readLineSync()!);
  List<int> arr = [3, 2, 5, 1, 6];

  bool result = sum(arr, arr.length, key);
  if (result) {
    print("Present");
  } else {
    print("absent");
  }
}
