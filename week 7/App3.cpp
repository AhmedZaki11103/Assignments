#include <iostream>
#include <array>
using namespace std;

int main ()
{
  int h_num = 0;
  int nums[5];

  cout << "type 5 numbers\n";

  for(int i =0; i < size(nums); i++)
  {
    cin  >> nums [i];
    
    if(nums[i] > 0 && nums[i] % 2 == 0)
    {
      h_num +=nums[i];
    }
  }

  cout << "your 5 numbers: \n";
  for(int j =0; j < size(nums); j++)
      cout << nums[j] << endl;

  cout << "The sum of positive and even numbers = ";
  cout << h_num;

  return 0;
}