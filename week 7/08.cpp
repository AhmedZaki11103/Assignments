#include <iostream>
using namespace std;

int main()
{
  int j = 2;
  for (int i = 2; i < 127; i +=j)
  {
    cout << i << endl;
    j*=2;
  }

  return 0;
  }

// Output Needed
// 2
// 6
// 14
// 30
// 62
// 126