void main() {
  String data = "MOM";
  String data2 = "aaabbaaa";
  print(isPalindrome(data));

  print(isPalindrome(data2));

  print("Result : ${leastString(data)}");
  print("Result 2: ${leastString(data2)}");
}

String leastString(String data) {
  if (!isPalindrome(data)) {
    return 'Not Possible';
  } else {
    List<String> res = data.split("").toList();
    for (var i = 0; i < res.length; i++) {
      if (res[i] != 'a') {
        res[i] = 'a';
        String result = res.map((e) => e).join();
        return result;
      }
    }
    return "Not Possible";
  }
}

bool isPalindrome(String data) {
  String newSet = data.split("").toList().reversed.join();

  if (data == newSet) {
    return true;
  } else {
    return false;
  }
}
