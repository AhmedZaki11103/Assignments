#include <iostream>
using namespace std;

// Your Function Here
int calculation(int n1, int n2 = 50, int n3 = 150)
{
  return n1 + n2 + n3;
}




int main()
{
  cout << calculation(50, 100, 150) << "\n"; // 300
  cout << calculation(100, 50) << "\n"; // 300
  cout << calculation(100) << "\n"; // 300
  return 0;
}