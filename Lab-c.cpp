#include <iostream>
using namespace std;

int nod(int a, int b); 


int main() {
    setlocale(LC_ALL, "RU");
    int a, b;
    cout << "Введите m и n дроби: ";
    cin >> a >> b;
    int x = nod(a, b);
    a /= x;
    b /= x;
    cout << "Сокращённая дробь: " << a << "/" << b;
    return 0;
}


int nod(int a, int b) {
    a = abs(a), b = abs(b);
    if (b == 0)return a;
    else return nod(b, a % b);
}