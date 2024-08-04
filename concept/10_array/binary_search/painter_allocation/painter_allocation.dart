void main() {
  int student = 2;
  List<int> painter = [5, 5, 5, 5];

  int result = book(painter, student);
  print(result);
}

int book(List<int> pages, int student) {
  int start = 0;
  int end = pages.fold(0, (previousValue, element) => previousValue + element);
  int ans = -1;
  int mid = start + (end - start) ~/ 2;

  while (start <= end) {
    if (isPossible(pages, student, mid)) {
      ans = mid;
      end = mid - 1;
    } else {
      start = mid + 1;
    }

    mid = start + (end - start) ~/ 2;
  }

  return ans;
}

bool isPossible(List<int> pages, int student, int mid) {
  int studentCount = 1;
  int pageSum = 0;

  for (var i = 0; i < pages.length; i++) {
    if (pageSum + pages[i] <= mid) {
      pageSum += pages[i];
    } else {
      studentCount++;
      if (studentCount > student || pages[i] > mid) {
        return false;
      }
      pageSum = pages[i];
    }
  }

  return true;
}
