// odd number and even number

#include <iostream>
using namespace std;

int main()
{
cout << "whrit A Number\n";

int num;
cin >> num;


if (num % 2 == 0)
    cout << num << " is An Even Number";

else if (num % 2 != 0)
    cout << num << " is An odd Number";


// cout << (num % 2 == 0 ? num << " is a Even Number" : num << " is a Ood Number")

return 0;
}