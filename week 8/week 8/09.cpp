#include <iostream>
using namespace std;

// Write Your Function Here
int sumall(int array[], int size, int non)
{
  int result = 0;
  for(int i = 0; i < size; i++)
  {
    if(array[i] == 13)
    {
      continue;
    }

    result +=  array[i];
  }
  return result;
}

int main()
{
  int numbers[] = { 13, 20, 3, 30, 5, 7, 40, 13 }; // 20 + 3 + 30 + 5 + 7 + 40 = 105
  int numssize = size(numbers);
  int noneed = 13;
  cout << sumall(numbers, numssize, noneed) << "\n";
  return 0;
}