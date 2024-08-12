void main() {
  List<int> arr = [1, 2, 3, 4];
  List<int> arr2 = [6];

  sumOfArray(arr, arr2, 4, 1);
}

void sumOfArray(List<int> arr, List<int> arr2, int n, int n2) {
  // print(arr + arr2);
  int carry = 0;
  int i = n - 1;
  int j = n2 - 1;
  List<int> ans = [];
  while (i >= 0 && j >= 0) {
    int sum = arr[i] + arr2[j] + carry;
    carry = sum ~/ 10;
    int value = sum % 10;
    ans.add(value);
    i--;
    j--;
  }
  while (i >= 0) {
    int sum = arr[i] + carry;
    carry = sum ~/ 10;
    int value = sum % 10;
    ans.add(value);
    i--;
  }
  while (j >= 0) {
    int sum = arr2[j] + carry;
    carry = sum ~/ 10;
    int value = sum % 10;
    ans.add(value);
    j--;
  }

  print(ans.reversed.toList());
}
