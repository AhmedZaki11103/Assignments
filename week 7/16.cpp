#include <iostream>
using namespace std;

int main()
{
  
  int i = 10;
  int j = 2;
  
  for (;i >= 4; i -=j)
  {
    cout << i << endl;
  }
  
  
  return 0;
  }

// Output Needed
// 10
// 8
// 6
// 4