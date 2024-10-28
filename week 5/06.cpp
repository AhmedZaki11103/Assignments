#include <iostream>
using namespace std;

int main()
{
int age = 40;
int points = 100;

if (age > 18 && sizeof(age) == 4)
{
  cout << "Age Data Is 4 Bytes\n";
  cout << "Age Is Ok\n";

  if (points > 50)
  {
    cout << "Points Is Ok\n";
  }
}


return 0;
}


// Output Needed
// "Age Data Is 4 Bytes"
// "Age Is Ok"
// "Points Is Ok"