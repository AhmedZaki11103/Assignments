#include <iostream>
using namespace std;

int main()
{
	// for
  for (int i = 10; i < 1000000000; i*=i)
  {
    cout << i << endl;
  }

int j =10;
while (j < 1000000000)
{
cout << j << endl;
j *= j;
}

  return 0;
  }

// Output Needed
// 10
// 100
// 10000
// 100,000,000 | 100.000.000
