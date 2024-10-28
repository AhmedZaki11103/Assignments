#include <iostream>
using namespace std;

int main()
{

  for (int i = 2; i < 150; i*=2)
  {
    cout << i << endl;
  }



  int j =2;
  while (j < 150)
  {
    cout << j << endl;
    j*=2;
  }
  
  return 0;
  }

  // Output Needed
// 2
// 4
// 8
// 16
// 32
// 64
// 128