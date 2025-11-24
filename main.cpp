#include "Triad.h"
#include "Date.h"
#include <Windows.h>

Triad createTriad(int x, int y, int z) {
    Date d(x, y, z);
    return d; // демонструємо підстановку
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Triad t1(1, 2, 3);
    Date d1(2025, 11, 25);

    Triad t2 = createTriad(2023, 5, 15);

    t1.print(); cout << endl;
    d1.print(); cout << endl;
    t2.print(); cout << endl;

    Date d2(2025, 11, 25);
    cout << "d1 == d2? " << (d1 == d2 ? "Так" : "Ні") << endl;

    return 0;
}
