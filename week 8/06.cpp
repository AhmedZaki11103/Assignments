#include <iostream>
#include <cctype>
using namespace std;

// Write Your Function Here
string swapping(string clause)
{
for(int i = 0; i < size(clause); i++)
{
  if (clause[i] == 'h' || clause[i] == 'H')
  {
    continue;
  }


  if (isupper(clause[i]))
  {
    clause[i] = tolower(clause[i]);
  }

  else
  {
    clause[i] = toupper(clause[i]);
  }
}

return clause;
}


int main()
{
  cout << swapping("hero Of THe PROgramming") << endl; // hERO oF tHE proGRAMMING  || hERO oF tHE proGRAMMING
  return 0;
}