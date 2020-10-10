
#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double y, x, a, b, e;

    cout << "Введіть значення х:";
    cin >> x;
    if (x < 4)
        b = 3 * pow(x, 5.) - pow(x, 3.) + 2 * x - 1;
    if (4 <= x && x < 7)
        b = atan((x - 2) / 3.);
    if (x >= 7)
        b = log10(2 * pow(x, -1.) + exp(3*x + 1));
    a = abs(9 * x * x * x + 2);
    y = a + b;
    cout << "\n1)Значення у = " << y << endl;

    if (x<4)
        b = 3 * pow(x, 5.) - pow(x, 3.) + 2 * x - 1;
    else
        if (4 <= x && x < 7)
            b = atan((x - 2) / 3.);
        else
            if (x >= 7)
                b = log10(2 * pow(x, -1.) + exp(3 * x + 1));
    y = a + b;
    cout << "\n2)Значення у = " << y << endl;  

    cin.get();
    return 0;
}
