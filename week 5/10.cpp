#include <iostream>
using namespace std;

int main()
{
  int num;
  cin >> num;

  if (num == 10)
  {
    cout << "Case 1\n";
  }
  else if (num > 19 && num < 21)
  {
    cout << "Case 2\n";
  }
  else if (num > 29 && num < 33)
  {
    cout << "Case 3\n";
  }
  else
  {
    cout << "Invalid Number\n";
  }

// ===============================================

switch (num)
{
  case 10:
    cout << "Case 1";
  break;

  case 20:
    cout << "Case 2";
  break;

  case 30:
  case 31:
  case 32:
  case 33:
    cout << "Case 3";
  break;

default: 
    cout << "Invalid Number";
}



  return 0;
}