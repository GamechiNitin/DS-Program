#include <iostream>
using namespace std;

int main()
{
  int data[4] = {1, 1, 0, 1};

  // Charcter => Segment of Level
  // Coin collect - scrore a point
  // No coin - looase point
  // P1 - Start
  // P2 start - P1 end
  // P1 - High score P2 LEVEL COMPLETED

  int p1 = 0;
  int p2;

  for (int i = 0; i < 4; i++)
  {
    if (data[i] == 1)
    {
      p1++;
    }
    else
    {
      p2 = i + 1;
      break;
    }
  }
  cout << "P1 " << p1 << " Required min level " << p2 << endl;
  cout << "P2 start " << p2 << ", level " << 4 - p2 << endl;
}
