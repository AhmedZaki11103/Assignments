#include <iostream>
using namespace std;

// Write Your Function Here

void money (float salary, int days)
{
  int weeks = days / 7;
  int holi_days = weeks *2;
  days -= holi_days;
  
  cout << salary / days << endl;
}




int main()
{
money(2015, 21); // 134.333
money(4500, 40); // 150
money(8600, 120); // 100
  return 0;
}


  /*
    Hints
    21 Days Has 3 "Weeks"
    Every "Week" You Have 2 Holidays.
    Total = 3 * 2 = 6 Holidays From 21 Days
  */