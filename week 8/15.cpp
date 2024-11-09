#include <iostream>
using namespace std;

// Write Your Functions Here
float avg (int array[], int size)
{
  float result = 0;
  for (int i = 0; i < size; i++)
  {
    result += array[i];
  }

  return result / size; 
}


int main()
{
  int money[] = { 10, 20, 15, 25, 30, 35 };
  int monsize = size(money);
  cout << avg(money, monsize) << "\n"; // 22.5
  return 0;
}