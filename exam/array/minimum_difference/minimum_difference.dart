void main() {
  // List<int> data = [6, 2, 4, 10];
  List<int> data = [1, 2, 3, 4];

  /*
  Multiple pair,
  Ascending 
  
   */
  int ans = 0;

// Step : 1 - Sorting
// Step : 2 - Find initial difference
// Step : 3 - difference is <= ans =>  ans = difference
// Step : 3 - difference is <= ans =>  ans = difference

  for (var i = 0; i < data.length - 1; i++) {
    int a = data[i];
    int b = data[i + 1];
    if (a > b) {
      data[i] = b;
      data[i + 1] = a;
    }
  }
  print(data);

  ans = data[1] - data[0];
  for (var i = 0; i < data.length - 1; i++) {
    for (var j = i + 1; j < data.length; j++) {
      int a = data[i];
      int b = data[j];
      int diff = b - a;

      if (diff <= ans) {
        print("Pairs is $a,$b with $diff");
        ans = diff;
      }
    }
  }
}
