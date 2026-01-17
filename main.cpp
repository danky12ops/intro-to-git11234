#include <iostream>
#include <cmath>

using namespace std;
int main() {
    setlocale(LC_ALL, "uk_UA.utf8");

    double x, y;

    cout << "--- Лабораторна робота №10. Варіант 25 ---" << endl;
    cout << "Введіть координату X: ";
    cin >> x;
    cout << "Введіть координату Y: ";
    cin >> y;
    if (x >= 0 && y >= 0 && (x * x + y * y <= 1)) {
        cout << "Результат: Точка потрапляє в заштриховану область." << endl;
    } else {
        cout << "Результат: Точка НЕ потрапляє в область." << endl;
    }

    return 0;
}
