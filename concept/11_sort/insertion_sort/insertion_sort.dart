void main() {
  List<int> data = [10, 5, 6, 8, 3, 2];

  for (var i = 1; i < data.length; i++) {
    int temp = data[i];

    int j = i - 1;
    while (j < i && j >= 0) {
      print("${data[j]} $temp");
      if (data[j] > temp) {
        data[j + 1] = data[j];
      } else {
        break;
      }
      print("${data[j]} ${temp} ------");
      j--;
    }

    data[j + 1] = temp;
    print("Round $i => ${data}");
  }
  print("Ans => ${data}");
}
