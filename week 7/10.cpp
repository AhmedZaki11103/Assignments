#include <iostream>
#include <array>
using namespace std;

int main()
{
  // Friends Array
  string friends[] = {"Ahmed", "Mohamed", "ameer", "Ashraf", "Amany"};

  // char a ='A';
  // cout <<  int (a) << endl;
  // cout <<  int(friends[0] [0])<< endl;

  for (int i = 0; i < size(friends); i++)
  {
    if(friends[i] [0] == 'A' )
    {
      cout << friends[i] << endl;
    }
  }

     cout << "================\n";

  int j = 0;
  while (j < size(friends))
  {
    if(int (friends[j] [0]) == 65)
    {
     cout << friends[j] << endl;;
    }
    j++;
  }



  return 0;
  }
// Output Needed

// "Ahmed"
// "Ashraf"
// "Amany"
