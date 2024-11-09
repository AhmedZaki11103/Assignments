#include <iostream>
using namespace std;

// Write Your Function Here

int minpositive(int array[], int size)
{
  int checknum = INT_MAX;

  for (int i = 0; i < size; i++)
  {
    if(array[i] > 0 && array[i] < checknum)
    {
      checknum = array[i];
    }
  }
  return checknum;
}

int main()
{
  int numbers[] = { -10, -20, 15, 100, 10, 5, -50, 0 }; // 5
  int numssize = size(numbers);
  cout << minpositive(numbers, numssize) << "\n";
  return 0;
}