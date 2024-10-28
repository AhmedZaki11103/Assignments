#include <iostream>
using namespace std;

int main ()
{

 cout << "=================================\n";
 cout << "========== Bits calculation =====\n";
 cout << "=================================\n";


int kilobytes;
cin >> kilobytes;

int bytes = kilobytes * 1024;
int bits =  bytes * 8;

cout << "number of kilobytes = " << kilobytes << " kilobytes\n" ;
cout << kilobytes << " kilobytes = " << bytes << " bytes\n";
cout << kilobytes << " kilobytes = " << bits << " bits ";
return 0;

}