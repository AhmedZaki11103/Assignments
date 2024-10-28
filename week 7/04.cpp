#include <iostream>
using namespace std;

int main()
{
/* for (1)

  for (int i = 0; i < 20; i++)
  {
    if(i == 10 || i == 12)
    {
      i++;
      continue;
    }

    if ( i % 2 == 0 )
    {
      cout << i << endl;
    }
  }*/

/* for (2)

  for (int i = 0; i < 20; i+=2)
  {
    if(i == 10 || i == 12)
    {
      continue;
    }
      cout << i << endl;

  }
*/

/* while (1)

  int j = 0 ;
  while (j < 20)
  {
    if(j == 10 || j == 12)
    {
      j++;
      continue;
    }

    if ( j % 2 == 0 )
    {
      cout << j << endl;
    }
     j++;
  }
*/

/* while (2)

int j = 0 ;
  while (j < 20)
  {
    if(j == 10 || j == 12)
    {
      j+=2;
      continue;
    }
      cout << j << endl;
      j += 2;
  }
*/

  return 0;
  }

// Output Needed
// 0
// 2
// 4
// 6
// 8
// 14
// 16
// 18
