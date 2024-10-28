#include <iostream>
using namespace std;

int main ()
{
  string products [] = {"Item1", "Item2", "Item3"};
  string sizes [] = {"Small", "Large", "X-Large" };
  
  for(int i =0; i < 3; i++)
  {
    cout << "Products Name: \n";
    cout << products[i] << endl;
    cout << "Products Sizes: \n";
    for(int j = 0; j < 3; j++)
    {
      cout << sizes[j];
      if(j < 2)
      {
        cout << ", ";
      }
    }
    cout << "\n====================\n";
  }

  return 0;
}