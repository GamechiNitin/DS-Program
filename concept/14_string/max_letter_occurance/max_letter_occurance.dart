import 'dart:io';

void main() {
  String s = stdin.readLineSync() ?? "";
  int index = 0;

  List<int> data = List.filled(26, 0);

  for (var i = 0; i < s.length; i++) {
    final ch = s[i];
    int number = 0;
    number = ch.codeUnits.first - 'a'.codeUnits.first;

    data[number]++;
  }

  int max = -1;
  for (var i = 0; i < data.length; i++) {
    if (data[i] > max) {
      max = data[i];
      index = i;
    }
  }
  index = 'a'.codeUnits.first + index;
  print(String.fromCharCode(index));
}
