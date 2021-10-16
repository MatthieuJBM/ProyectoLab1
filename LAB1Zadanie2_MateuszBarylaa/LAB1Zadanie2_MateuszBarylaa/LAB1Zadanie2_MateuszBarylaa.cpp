
#include <iostream>
using namespace std;

int main()
{
    /*2. Napisaæ program, który sprawdza, czy podana liczba ca³kowita, wczytana z klawiatury
        jest parzysta, czy nieparzysta. (operator %).*/
    cout << "Program sprawdza czy liczba jest parzysta.\n";
    int a=1;
    while (a != 0) {
        cout << "Podaj liczbe: ", cin >> a, cout << endl;
        if (a % 2 == 0) {
            cout << "Liczba jest parzysta.\n";
        }
        else {
            cout << "Liczba jest nie parzysta.\n";
        }
    }
    
}
