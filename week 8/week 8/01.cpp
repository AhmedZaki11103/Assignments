
#include <iostream>
using namespace std;

// Write Your Function Here
void calcspecial (int n1 , int n2)
{
  if(n1 == n2)
    cout << n1 + n2 << endl;
  
  else if(n1 > n2)
    cout << n1 - n2 << endl;

  else if(n1 < n2)
    cout <<  n2 - n1 << endl;
}


int main()
{
  calcspecial(40, 40);    // First = Second -> 40 + 40 = 80
  calcspecial(200, 50);   // First > Second -> 200 - 50 = 150
  calcspecial(100, 300);  // First < Second -> 300 - 100 = 200
  return 0;
}
