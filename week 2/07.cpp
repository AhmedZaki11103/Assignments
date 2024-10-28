#include <iostream>
using namespace std;

int num = 50;

int read()
{
  int num = 100;
  cout << num;
  return 0;
}

int play()
{
  int num = 200;
  read();
  return 0;
}

int main()
{
  play();
  return 0;
}


/*#include <iostream>
using namespace std;

int num = 100;

int read()
{
  int num = 50;
  cout << num << " come from read \n";
  return 0;
}

int play()
{
  int num = 200;
  cout << num << " come from play \n";
  read();
  return 0;
}

int main()
{
  cout << num << " come from main \n";
  play();
  return 0;
}
*/