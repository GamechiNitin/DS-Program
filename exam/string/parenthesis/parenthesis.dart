void main() {
  String data1 = "(()))";
  String data2 = "))((";

  print("(".codeUnits);
  print(")".codeUnits);

  List<String> input1 = data1.split("").toList();
  List<String> input2 = data2.split("").toList();

  print("Result 1 : ${find(input1)}");
  print("Result 2 : ${find(input2)}");
}

int find(List<String> data) {
  int open = 0;
  int close = 0;
  for (var i = 0; i < data.length; i++) {
    if (data[i] == "(") {
      open++;
    } else {
      if (open > 0)
        open--;
      else
        close++;
    }
  }

  return open + close;
}
