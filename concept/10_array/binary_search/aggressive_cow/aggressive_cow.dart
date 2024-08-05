void main() {
  List<int> stalls = [4, 2, 1, 3, 6];
  List<int> stalls2 = [0, 3, 4, 7, 10, 9];
  int cows = 2;
  int cows2 = 4;

  int result = findSpace(stalls, cows);
  print(" Result 1 : ${result}");
  int result2 = findSpace(stalls2, cows2);
  print(" Result 2 : ${result2}");
}

/* Todo
  1 - Sort Array
  2 - 
*/
int findSpace(List<int> stalls, int cows) {
  // 1 - Sort Array
  stalls.sort();
  print(stalls);

  // 2 - Find mid, start and End
  int start = 0;
  int max = stalls.last;
  int ans = 1;
  int end = max;
  int mid = start + (end - start) ~/ 2;

  while (start <= end) {
    if (possibleSolution(stalls, cows, mid)) {
      ans = mid;
      start = mid + 1;
    } else {
      end = mid - 1;
    }
    mid = start + (end - start) ~/ 2;
  }

  return ans;
}

bool possibleSolution(List<int> stalls, int cows, int mid) {
  int cowsCount = 1;
  int initialPosition = stalls.first;

  for (var i = 0; i < stalls.length; i++) {
    if (stalls[i] - initialPosition >= mid) {
      cowsCount++;
      if (cowsCount == cows) return true;
      initialPosition = stalls[i];
    }
  }

  return false;
}
