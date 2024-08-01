void main() {
  List<int> numbers = [-3, 0, 1, -3, 1, 1, 1, -3, 10, 0];
  List<int> setnumber = numbers.toSet().toList();

  print(numbers);
  print(numbers.toSet().toList());

  for (var i = 0; i < setnumber.length; i++) {
    int count = 0;
    for (var j = 0; j < numbers.length; j++) {
      if (setnumber[i] == numbers[j]) {
        count++;
      }
    }
    print("Number is : ${setnumber[i]} = ${count} times");
  }
}
