
#include <iostream>

using namespace std;

void draw_triangle(int height) {
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= height - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Введите высоту треугольника: ";
    cin >> n;
    draw_triangle(n);
    return 0;
}
