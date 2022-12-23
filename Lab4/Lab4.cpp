#include <iostream>
using namespace std;

double func_do(double, double, int&, double&);
double func_while(double, double, int&, double&);
double func_for(double, double, int&, double&);

int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");

    string flag = "yes";
    double x, e, result;
    double fir_no = 0;
    int count = 0;
    int variant;

    while (flag != "no") {

        cout << "Введите 'e' и 'x'" << endl;
        cin >> e >> x;
        cout << "Выбеите, каким способом считать результат (ввести число):\n 1. do while\n 2. while \n 3. for" << endl;
        cin >> variant;

        while (variant != 1 and variant != 2 and variant != 3) {
            cout << "Такого способа нет, выберите ещё раз" << endl;
            cout << "Выбеите, каким способом считать результат:\n 1. do while\n 2. while \n 3. for" << endl;
            cin >> variant;
        }

        switch (variant) {
        case 1:
            result = func_do(x, e, count, fir_no);
            break;
        case 2:
            result = func_while(x, e, count, fir_no);
            break;
        case 3:
            result = func_for(x, e, count, fir_no);
            break;
        default:
            cout << "Произошла какая-то ошибка" << endl;
        }
        
        cout << "Результат: " << result << endl;
        cout << "Первое неучтённое слагаемое: " << fir_no << endl;
        cout << "Количество слагаемых: " << count << endl;
        count = 0;

        cout << "Продолжить? Введите yes или no" << endl;
        cin >> flag;
    }

    return 0;
}

