// لديك مجموعة من المتغيرات يجب عدم التعديل عليهم
// لديك مجموعة من السطور كل سطر يخرج قيمة معينة
// المطلوب إستبدال علامة الإستفهام بشيء مما تعلمته لتخرج النتيجة المطلوبة
// ممنوع إستخدام اي شيء بعيدا عن المتغيرات
// ممنوع تغيير العلامات الخاصة بالجمع والطرح والضرب

#include <iostream>
using namespace std;

int main()
{
// Do Not Edit Here
short a = 1000;                   // 2
int b = 10000;                    // 4
long double c = 5.560000505012;   // 16

// Change ??? To Something Else To Get The Output
cout << sizeof (c) - sizeof (b) << "\n"; // 12
cout << sizeof (c) + sizeof (b) << "\n"; // 20
cout << sizeof (a) * sizeof (c) << "\n"; // 32
cout << a * int (c) << "\n";            // 5000
cout << char( sizeof (c) * int(c) ) << "\n";  // P    // = 80

return 0;
}