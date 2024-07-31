void main() {
  /* Unique number
    Array of Lenth N.
    N = 2M+1 
  */

  List<int> data = [4, 4, 1, 6, 6];
  int ans = 0;
  for (var i = 0; i < data.length; i++) {
    ans = ans ^ data[i];
  }
  print(ans);
}
