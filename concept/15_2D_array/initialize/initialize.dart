import 'dart:io';

void main() {
  // Taking Input
  print("Enter Row length : ");
  int rLength = int.parse(stdin.readLineSync()!);

  print("Enter Column length : ");
  int cLength = int.parse(stdin.readLineSync()!);

  List<List<int?>> arrRowWise = List.generate(
    rLength,
    (_) => List.filled(cLength, null),
  );

  // Taking input Row Wise
  print("------------------------");

  for (int row = 0; row < rLength; row++) {
    print("Enter $cLength intergers for row ${row + 1}, seperated by space");

    String? input = stdin.readLineSync();

    if (input != null) {
      // Split the line into string values and convert them to integers
      List<String> values = input.split(' ');

      // Check if the number of input values matches the number of columns
      if (values.length != cLength) {
        print("Error: Please enter exactly $cLength values.");
        return;
      }

      for (int col = 0; col < cLength; col++) {
        arrRowWise[row][col] = int.parse(values[col]);
      }
    }
  }

  print("The 2D array is:");
  print(arrRowWise);
  for (var row in arrRowWise) {
    print(row);
  }
  // for (int row = 0; row < 3; row++) {
  //   for (int col = 0; col < 4; col++) {
  //     cout << arrRowWise[row][col] << " ";
  //   }
  //   cout << endl;
  // }

  // int arrColWise[3][4];
  // cout << "-------------------" << endl;
  // cout << "Taking input Column Wise" << endl;

  // // Taking input Column Wise
  // for (int col = 0; col < 4; col++)
  // {
  //     for (int row = 0; row < 3; row++)
  //     {
  //         cin >> arrColWise[row][col];
  //     }
  // }

  // for (int row = 0; row < 3; row++)
  // {
  //     for (int col = 0; col < 4; col++)
  //     {
  //         cout << arrColWise[row][col] << " ";
  //     }
  //     cout << endl;
  // }
}
