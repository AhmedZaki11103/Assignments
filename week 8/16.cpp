/*
لدينا Function تقبل منا Four Parameters
الأول هو الكتب الصغير وهي تحتاج لمساحتين في الرف
الثاني هو الكتب المتوسطة وهي تحتاج لأربع مساحات في الرف
الثالث هو الكتب الكبيرة وهي تحتاج لست مساحات في الرف
الرابع هو الرفوف وكل رفع يحتوي على 20 مساحة
المطلوب توزيع الكتب على الرفوف ومعرفة كم عدد المساحات المتبقية
إذا كان عدد المساحات الخاصة بالكتب أكبر من المساحات الموجودة في الرفوف نقوم بإرجاع رقم 0
*/

#include <iostream>
using namespace std;

// Write Your Function Here

int books(int small, int medium, int large, int shelf)
{
 int ss  = small * 2;  // s=> space
 int sm  = medium* 4;
 int sl  = large * 6;
 int ssh = shelf * 20;
 int result = ssh - (ss + sm + sl);
 
 if (result > 0) {return result;}
 else {return 0;}
 
}

int main()
{
  cout << books(10, 4, 3, 4) << "\n"; // 26
  cout << books(10, 4, 3, 2) << "\n"; // 0
  return 0;
}