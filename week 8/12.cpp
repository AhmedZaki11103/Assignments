#include <iostream>
using namespace std;

// Write Your Function Here
string createurl(string http, string name, string dom, bool tf = true)
{
  if (tf == 0)
  {
    return http + "://" + name + "." + dom;
  }
  else
  {
    return http + "://www." + name + "." + dom;
  }
}


int main()
{
  cout << createurl("https", "elzero", "org") << "\n"; // https://www.elzero.org
  cout << createurl("https", "google", "com", false) << "\n"; // https://google.com
  cout << createurl("http", "learn", "net") << "\n"; // http://www.learn.net
  return 0;
}