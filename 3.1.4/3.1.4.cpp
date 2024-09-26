// Євтюхін Олександр
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 9

#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double y1;
    double y2;
    double x;
    double B1;
    double B2;
    double A;

    cout << "Введіть x: "; cin >> x;

    // Обчислення значення A
    A = 2 * pow(fabs(x), 3);

    // Спосіб 1: розгалуження в скороченій формі
    if (x <= -0.1)
    {
        B1 = 5 * cos(18 * x);
    }
    if (x > -0.1 && x < 1.2)
    {
        B1 = atan((x + 2) / 5);
    }
    if (x >= 1.2)
    {
        B1 = 1 / tan(x) + 18;
    }

    y1 = A - B1;
    cout << "1) y = " << y1 << endl;

    // Спосіб 2: розгалуження в повній формі
    if (x <= -0.1)
    {
        B2 = 5 * cos(18 * x);
    }
    else
    {
        if (x > -0.1 && x < 1.2)
        {
            B2 = atan((x + 2) / 5);
        }
        else
        {
            B2 = 1 / tan(x) + 18;
        }
    }

    y2 = A - B2;
    cout << "2) y = " << y2 << endl;

    return 0;
}
