#include <iostream>
using namespace std;

int main()
{
  int num = 2;
  while (num < 520) 
  {
    num -=1;
    cout << num << endl;
    num *=2;
    num +=3;
  }

  return 0;
  }

// Needed Output
// 1
// 4
// 10
// 22
// 46
// 94
// 190
// 382