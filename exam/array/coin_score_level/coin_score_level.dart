void main() {
  List<int> data = [1, 1, 0, 1];

  // Charcter => Segment of Level
  // Coin collect - scrore a point
  // No coin - looase point
  // P1 - Start
  // P2 start - P1 end
  // P1 - High score P2 LEVEL COMPLETED

  int p1 = 0;
  late int p2;
  int levelSize = data.length;

  for (var i = 0; i < data.length; i++) {
    if (data[i] == 1) {
      p1++;
    } else {
      p2 = i + 1;
      break;
    }
  }

  print("P1 $p1 Required min level $p2");
  print("P2 start ${p2}, level ${levelSize - p2}");
  print("Max level $levelSize");
}
