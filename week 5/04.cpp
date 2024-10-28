#include <iostream>
using namespace std;

int main()
{
int num1 = 3;
int num2 = 2;
int num3 = 3;
int num4 = 25;

// 1>2
//4>1
//1==3
//1+2 < 4
//1+3 < 4
// 1+2+3 <4
//4-(1+3)+2 ==21


// Do Not Edit Any Condition

// Condition 1
if (num1 > num2)
  cout << "Condition 1 Is True\n";
else
  cout << "Condition 1 Is False\n";

// Condition 2
if (num1 > num2 && num1 < num4)
  cout << "Condition 2 Is True\n";
else
  cout << "Condition 2 Is False\n";

// Condition 3
if (num1 > num2 && num1 == num3)
  cout << "Condition 3 Is True\n";
else
  cout << "Condition 3 Is False\n";

// Condition 4
if (num1 + num2 < num4)
  cout << "Condition 4 Is True\n";
else
  cout << "Condition 4 Is False\n";

// Condition 5
if (num1 + num3 < num4)
  cout << "Condition 5 Is True\n";
else
  cout << "Condition 5 Is False\n";

// Condition 6
if (num1 + num2 + num3 < num4)
  cout << "Condition 6 Is True\n";
else
  cout << "Condition 6 Is False\n";

// Condition 7
if (num4 - (num1 + num3) + num2 == 21)
  cout << "Condition 7 Is True\n";
else
  cout << "Condition 7 Is False\n";


return 0;
}

// Output Needed
// "Condition 1 Is True"
// "Condition 2 Is True"
// "Condition 3 Is True"
// "Condition 4 Is True"
// "Condition 5 Is True"
// "Condition 6 Is True"
// "Condition 7 Is True"