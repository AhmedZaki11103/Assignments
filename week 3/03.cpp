// بإستخدام مكونات اللغة قم بطباعة ما يلي
// السطر الأول Maximum Integer Number
// السطر الثاني Minimum Integer Number
// السطر الثالث Maximum Short Integer Number
// السطر الرابع Minimum Short Integer Number
// قم بطباعة كلمة Maximum أو Minimum قبل الرقم كما في المثال


#include <iostream>
#include <limits.h>
using namespace std;


int main()
{
cout << "\"Maximum Integer Number Is => " << INT_MAX << "\"\n";
cout << "\"Minimum Integer Number Is => " << INT_MIN << "\"\n";
cout << "\"Maximum Short Integer Number Is => " << SHRT_MAX << "\"\n";
cout << "\"Minimum Short Integer Number Is => " << SHRT_MIN << "\"";

return 0;
}

// Output Needed
// "Maximum Integer Number Is => 2147483647"
// "Minimum Integer Number Is => -2147483648"
// "Maximum Short Integer Number Is => 32767"
// "Minimum Short Integer Number Is => -32768"