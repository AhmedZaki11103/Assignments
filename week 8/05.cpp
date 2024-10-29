#include <iostream>
#include <cmath>
using namespace std;

// Write Your Function Here
void thepower (int base, int power)
{

int num = base;
int i = power;

for (; i > 1; i--)
{
  num = num * base;
}

cout << num << endl;

}


int main()
{
  thepower(2, 5); // 32
  thepower(5, 3); //125
  thepower(10, 2); //100

  return 0;
}