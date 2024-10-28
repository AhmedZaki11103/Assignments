#include <iostream>
using namespace std;

int main()
{
  int n1;
  cout << "Type The Frist Number\n";
  cin >> n1;
  
  int n2;
  cout << "Type The Second Number\n";
  cin >> n2;

  cout << "first Number = " << n1 << endl; 
  cout << "Second Number = " << n2 << endl;
  if(n1 > n2)
  {
    int temp =0;
      temp = n1;
      n1 = n2;
      n2 = temp;
      cout << "============================\n";
      cout << "The Values Have Been Swapped\n";
      cout << "============================\n";
  }

  for(int i =n1+1; (i > n1) && (i < n2); i++)
  {
     if (i % 2 == 1)
      {
        cout << i << endl;
      }
  }

  return 0;
  }
  
  /*
  Test Case 1
  Number One: 1
  Number Two: 9
  Output: 3, 5, 7

  Test Case 2
  Number One: 2
  Number Two: 15
  Output: 3, 5, 7, 9, 11, 13

  Test Case 3
  Number One: 8
  Number Two: 2
  Output: 3, 5, 7
*/