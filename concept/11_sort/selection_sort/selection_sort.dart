void main() {
  List<int> data = [10, 21, 4, 7, 44];
  List<int> data2 = [110, 11, 41, 57, 34];

  data.sort();
  sorts(data2);
}

void sorts(List<int> selection) {
  print(selection);

  for (var i = 0; i < selection.length - 1; i++) {
    int initial = i;

    for (var j = initial + 1; j < selection.length; j++) {
      if (selection[j] < selection[initial]) {
        initial = j;
      }
    }
    int a = selection[i];
    int b = selection[initial];
    selection[i] = b;
    selection[initial] = a;
    // selection.removeAt(i);
    // selection.insert(i, b);
    // selection.removeAt(initial);
    // selection.insert(initial, a);
  }
  print(selection);
}

void swap() {}
