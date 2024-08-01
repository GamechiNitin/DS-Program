void main() {
  List<int> input = [6, 3, 1, 5, 4, 3, 2];
  List<int> input2 = [8, 7, 2, 5, 4, 7, 1, 3, 6];

  dublicateFind(input);
  dublicateFind(input2);

  dublicateFind2(input);
  dublicateFind2(input2);
}

// Solution 1 :
void dublicateFind(List<int> input) {
  List<int> temp = [];
  for (var i = 0; i < input.length; i++) {
    if (temp.isEmpty || !(temp.contains(input[i]))) {
      temp.add(input[i]);
    } else {
      print(input[i]);
    }
  }
}

void dublicateFind2(List<int> input) {
  int ans = 0;

  // XOR of Array
  for (var i = 0; i < input.length; i++) {
    ans = ans ^ input[i];
  }

  // XOR - [1 - n-1]
  for (var i = 1; i < input.length; i++) {
    ans = ans ^ i;
  }

  print("Solution 2 : $ans Note: Only work for 1 dublicate value");
}
