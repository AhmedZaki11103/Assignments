#include <iostream>
using namespace std;

  int main()
  {
  for(int i = 100; i < 1100; i +=100)
  {
    cout << i << endl;
    i +=100;
    cout << i << endl;
    i -=100;
  }

  return 0;
  }

// Output Needed
// 100
// 200
// 200
// 300
// 300
// 400
// 400
// 500
// 500
// 600
// 600
// 700
// 700
// 800
// 800
// 900
// 900
// 1000
// 1000
// 1100
