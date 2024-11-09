#include <iostream>
#include <array>
using namespace std;

// Write Your Function Here
int plusandmultiply(int array[], int num)
{
  int plus = 0;
  int multiply = 1;
 
  for(int i = 0; i < num; i++)
  {
  if(array[i] % 2 == 0)
  {
    plus += array[i];
  }

  else
  {
    multiply *= array[i];
  }
  }
 
  return plus + multiply ;
}

int main()
{
  int numbers[] = { 10, 20, 3, 30, 5, 7, 40 };
  int numssize = size(numbers);
  cout << plusandmultiply(numbers, numssize) << "\n";
  // Even Numbers -> 10 + 20 + 30 + 40 = 100
  // Odd Numbers  -> 3 * 5 * 7 = 105
  // Total = 100 + 105 = 205
  return 0;
}