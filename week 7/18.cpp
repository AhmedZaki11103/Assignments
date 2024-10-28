#include <iostream>
using namespace std;

int main()
{

  for (int i = 0; i <= 1000; i += 100) // Do Not Edit This Line
  {
    if(i >= 100 && i <=900 && i != 500)
    {
      cout << i << "\n";
    }
  }


  return 0;
  }

// Output Needed
// 100
// 200
// 300
// 400
// 600
// 700
// 800
// 900