// Find Greatest Number

#include <iostream>
using namespace std;

int main()
{
cout << "Write 3 Numbers To Find The Greatest One\n";

int num1, num2, num3;
cin >> num1 >> num2 >> num3;

// ElZero App

if (num1 > num2 && num1 > num3)
{
    cout << "The Greatest of the Numbers You Entered Is " << num1;
}

else if (num2 > num1 && num2 > num3)
{
    cout << "The Greatest of the Numbers You Entered Is " << num2;
}

else {
    cout << "The Greatest of the Numbers You Entered Is " << num3;
 } 

/* My App

if (num1 > num2){

    if (num1 > num3){
        cout << "The Greatest of the Numbers You Entered Is " << num1;
    }
}

else if ( num2 > num1){

    if (num2 > num3){
        cout << "The Greatest of the Numbers You Entered Is " << num2;
    } 
    else {
        cout << "The Greatest of the Numbers You Entered Is " << num3;
 }
}

*/
return 0;
}