 #include <iostream>
 #include <cmath>
 using namespace std;
 int main() {
        int n1, n2, out;
        char input;
        cout << "Нажмите любую клавишу, а затем Enter чтобы начать" << endl;
        cin >> input;
        while(true){
            cout << "Введите первое число:" << endl;
            cin >> n1;
            cout << "Отлично, теперь введите действие:" << endl;
            cin >> input;
            cout << "Отлично, теперь введите второе число:" << endl;
            cin >> n2;
            switch (input)
            {
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
            case '%':
                out = n1 / 100.0 * n2;
                break;
            case '^':
                out = pow(n1, n2);
                break;
            case '&':
                out = n1 % n2;
                break;
            default:
                cout << "Ошибка" << endl;
                break;

            }
            cout << "Получилось: " << out << endl << "Для выхода @:" << endl;
            cin >> input;
            if(input == '@') break;
            
            
        }
        return 0;
 }
 