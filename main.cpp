 #include <iostream>
 #include <cmath>
 using namespace std;

    char op;
    double n1, n2, out;
    int exi = 1;

 void start() {
    cout << "Добро пожаловать! " << endl;
    cout << "Все операции:" << endl << "сложение - +" << endl << "вычитание - -" << endl << "умножение - *" << endl << "деление - /";
    cout << endl << "процент от числа - %" << endl << "возведение в степень - ^" << endl << "извлечение корня - возведение в 0.5 степень" << endl;

    
 }

 void input() {
    cout << "Первое число: ";
    cin >> n1;
    cout << endl << "Действие: ";
    cin >> op;
    cout << endl << "Второе число: ";
    cin >> n2;
    cout << endl;
 }

// ошибки:
// 1 - деление на ноль
// 2 - ошибка оператора
// 0 - успех
int calcualate() {
   if(op == '/' && n2 == 0) {
      cout << "Ошибка - на 0 делить нельзя!" << endl;
   }
   switch(op) {
      case '+':
         out = n1 + n2;
         break;
      case '-':
         out = n1 - n2;
         break;
      case '*':
         out = n1 * n2;
         break;
      case '/':
         out = n1 / n2;
         break;
      case '^':
         out = pow(n1, n2);
         break;
      case '%':
         out = n1 + n2;
         break;
      default:
         cout << "Операции - " << op << " НЕ существует" << endl;
         return 2;    
                  
   }
   return 0;
   }

   void exitt() {
      cout << "Хотите выйти y/n?";
      cin >> op;
      cout << endl;

      if(op == 'y')exi = 0;

   }
 int main() {
    start();
    do
    {
      exi = 1;
      input();
      int err = calcualate();
      if(err == 0) cout << "Ответ: " << out << endl;
      else {
         exitt();
         continue;
      }
      exitt();
    } while (exi == 1);
    
    return 0;
 }