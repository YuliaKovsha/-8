#pragma once
#include <iostream>
using namespace std;

class Triad {
protected:
    int a, b, c;
public:
    Triad(int x = 0, int y = 0, int z = 0) : a(x), b(y), c(z) {}

    void print() const {
        cout << "(" << a << ", " << b << ", " << c << ")";
    }

    bool operator==(const Triad& other) const {
        return (a + b + c) == (other.a + other.b + other.c);
    }

    bool operator!=(const Triad& other) const {
        return !(*this == other);
    }

    bool operator<(const Triad& other) const {
        return (a + b + c) < (other.a + other.b + c);
    }

    bool operator>(const Triad& other) const {
        return (a + b + c) > (other.a + other.b + c);
    }
};
