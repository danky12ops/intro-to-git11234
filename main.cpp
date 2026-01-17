#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "uk_UA.utf8");

    double x, y;
    int choice = 1;
    cout << "--- Лабораторна робота №12 (Цикли). Варіант 25 ---" << endl;
    while (choice == 1) {
        cout << "\nВведіть X та Y: ";
        cin >> x >> y;

        if (x >= 0 && y >= 0 && (x * x + y * y <= 1)) {
            cout << "Точка потрапляє в область." << endl;
        } else {
            cout << "Точка НЕ потрапляє в область." << endl;
        }
        cout << "Бажаєте перевірити ще одну точку? (1 - так, 0 - ні): ";
        cin >> choice;
    }

    cout << "Програму завершено. Дякую!" << endl;
    return 0;
}
