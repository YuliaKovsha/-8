#pragma once
#include "Triad.h"

class Date : public Triad {
public:
    Date(int year = 0, int month = 1, int day = 1) {
        a = year;
        b = month;
        c = day;
    }

    void print() const {
        cout << a << "-" << b << "-" << c;
    }

    bool operator==(const Date& other) const {
        return (a == other.a && b == other.b && c == other.c);
    }

    bool operator!=(const Date& other) const {
        return !(*this == other);
    }

    bool operator<(const Date& other) const {
        if (a != other.a) return a < other.a;
        if (b != other.b) return b < other.b;
        return c < other.c;
    }

    bool operator>(const Date& other) const {
        return other < *this;
    }
};
