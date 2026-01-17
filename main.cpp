#include <iostream>
using namespace std;
bool checkArea(double x, double y) {
    return (x >= 0 && y >= 0 && (x * x + y * y <= 1));
}

int main() {
    setlocale(LC_ALL, "uk_UA.utf8");
    double x, y;
    cout << "--- Лабораторна №15 (Функції). Варіант 25 ---" << endl;
    cout << "Введіть X та Y: ";
    cin >> x >> y;
    if (checkArea(x, y)) {
        cout << "Точка в області" << endl;
    } else {
        cout << "Точка поза областю" << endl;
    }
    return 0;
}
