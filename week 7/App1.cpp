#include <iostream>
using namespace std;

int main ()
{
  int nums[] = { 100, 200, 300, 400, 500, 600};
  int numsSize = size(nums);

// 100 | 300 | 500
// method 1
//   for (int i =0; i < numsSize; i++)
//   {
//     cout << nums[i++] << endl;
//   }
// method 2 
//   for (int i =0; i < numsSize; i++)
//   {
//     cout << nums[i++] << endl;
//   } 
  
  
// 600 | 500 | 400 | 300
//   for(int i = 5; i > 1 ; --i)
//   {
//     cout << nums[i] << endl;
//   }
int i = 5;
  for(;;)
  {
    cout << nums[i] << endl;
    --i;
    if (i == 1)
    {
        break;
    }
  }


  return 0;
}