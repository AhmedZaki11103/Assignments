#include <iostream>
#include <array>
using namespace std;

int main()
{
  int nums[] = {2, 4, 5, 6, 10, 12, 20}; // أضفت رقمي 12و20 لاختبار ديناميكية الكود
  int help_num = size(nums) -1; // جعلت قيمة الرقم المساعد ديناميكية بدلا من رقم 4

  for (int i =0; i< size(nums); i++)
  {
    cout << nums[i] << " + " << nums [help_num] << " = ";
    cout << nums[i] + nums [help_num]<< endl;
    help_num--;
  }


  return 0;
  }

// Output Needed
// "2 + 10 = 12"
// "4 + 6 = 10"
// "5 + 5 = 10"
// "6 + 4 = 10"
// "10 + 2 = 12"