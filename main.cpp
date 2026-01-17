#include <iostream>
#include <vector>
using namespace std;

int main() {
    setlocale(LC_ALL, "uk_UA.utf8");
    int n;
    cout << "Скільки точок перевірити? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        double x, y;
        cout << "Точка " << i + 1 << " (x y): ";
        cin >> x >> y;
        if (x >= 0 && y >= 0 && (x * x + y * y <= 1)) 
            cout << "-> В області" << endl;
        else 
            cout << "-> Поза областю" << endl;
    }
    return 0;
}
