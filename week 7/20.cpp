#include <iostream>
#include <array>
using namespace std;

int main()
  {
  string names[] = {"Osama", "Ahmed", "Mahmoud", "Hagar", "Eman", "Salwa"};
  
  for(int i =0; i < size(names); i++)
  {
    if(size(names[i]) == 5)
    {
      cout << names[i] << endl;
    }
  }


  return 0;
  }

// Output Needed
// "Osama"
// "Ahmed"
// "Hagar"
// "Salwa"