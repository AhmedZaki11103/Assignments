#include <iostream>
using namespace std;

// Write Your Function Here

int pricing(int phones, int usedPhones, int price, int tax)
{
  int newphones = phones - usedPhones;
  int price_uph = price - 200; // uph => usedPhones

  int Financial_income =  (price *newphones) + (price_uph * usedPhones);
  float Financial_outputs = Financial_income * tax / 100;
  
  int gain = Financial_income - Financial_outputs;
  return gain;
}


int main()
{
  cout << pricing(50, 10, 800, 20) << "\n"; // 30400
  return 0;
}






/*
لدينا Function تقبل منا Four Parameters
الأول هو عدد التليفونات التي ستيبعها الشركة
الثاني هو عدد التليفونات المستعملة من العدد الكلي
الثالث هو سعر التليفون الجديد
الرابع هو قيمة الضرايب بالنسبة المئوية التي ستدفعها الشركة فمثلا رقم 40 معناه 40%
التليفون المستعمل ثمنه أقل من الجديد ب 200
المطلوب معرفة مكسب الشركة الكلي بعد دفع الضرايب
*/