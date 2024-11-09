#include <iostream>
using namespace std;

// Write Your Function Here
int calculate(int n1, int n2, string op = "a")
{
  if (op == "a" || op == "add")
  {
    return n1 + n2;
  }

  else if (op == "s" || op == "subtract")
  {
    return n1 - n2;
  }

   else if (op == "m" || op == "multiply")
  {
    return n1 * n2;
  }
  
  else 
  {
    return 0;
  }
}


int main()
{
  cout << calculate(10, 20) << "\n"; // 30
  cout << calculate(10, 20, "a") << "\n"; // 30
  cout << calculate(10, 20, "s") << "\n"; // -10
  cout << calculate(10, 20, "subtract") << "\n"; // -10
  cout << calculate(10, 20, "multiply") << "\n"; // 200
  cout << calculate(10, 20, "m") << "\n"; // 200
  cout << calculate(10, 20, "Invalid") << "\n"; // 0
  return 0;
}
/*
لدينا Function تقوم بعمل اكثر من عملية حسابية
العمليات الحسابية هي الجمع والطرح والضرب
ال Function تقبل ثلاثة Parameters الرقم الأول والرقم الثاني ونوع العملية الحسابية
كل ما عليك هو تنفيذ العملية الحسابية بناء على المدخلات
في حالة قام الشخص بكتابة نوع العملية الحسابية خطأ يرجع من ال Function رقم 0
العمليات الحسابية المتاحة هي add, subtract, multiply
مكن للشخص كتابة أول حرف فقط من إسم العملية الحسابية فمثلا subtract يمكن أن يكتب s
إذا لم يكتب الشخص العملية الحسابية نهائيا قم بعمل العملية الإفتراضية وهي الجمع
*/