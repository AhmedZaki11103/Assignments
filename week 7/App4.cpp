#include <iostream>
#include <array>
using namespace std;

int main ()
{
  /* my try
  int t_num = 7;

  int g_num;
  cout << "Type A Number Between 0 & 10\n";
  cin >> g_num;


  if (g_num == t_num)
  {
    cout << "Congratulations, you won 🥳🥳";
  }

  for (int i = 1 ;; i++)
  {
    
    if (g_num != t_num)
    {
      if (i == 3)
      {
        cout << "ُWrong, End Game!";
        break;
      }
      cout << "Wrong, try Again \n";
      cout << "Type A Number Between 0 & 10\n";
      cin >> g_num;
      if (g_num == t_num)
        cout << "Congratulations, you won 🥳🥳";
    }
  }
*/
int guessNumber = 7;
  int guessTries = 0;
  int choose;
  cout << "Please Guess The Number Between 1 & 10\n";

  while (true)
  {
    cin >> choose;
    if (choose == guessNumber)
    {
      cout << "Great, Correct Guess\n";
      break;
    }
    else
    {
      cout << "Sorry, Wrong Guess\n";
      guessTries++;
    }
    if (guessTries == 3)
    {
      cout << "Sorry, You Failed. The Number Is: " << guessNumber << "\n";
      break;
    }
  }

  return 0;
}