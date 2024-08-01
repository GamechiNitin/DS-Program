void main() {
  List<int> input = [1, 2, 2, 2, 3, 4];

  List<int> input2 = [2, 2, 3, 3];

  intersection(input, input2);
}

void intersection(List<int> n, List<int> m) {
  int i = 0;
  int j = 0;
  while (i < n.length && j < m.length) {
    if (n[i] == m[j]) {
      print([n[i]]);
      i++;
      j++;
    } else if (n[i] < m[j]) {
      i++;
    } else {
      j++;
    }
  }
}
