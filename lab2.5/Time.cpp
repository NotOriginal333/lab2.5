#include "Time.h"
#include <iostream>
#include <sstream>

using namespace std;

Time::Time() {
    triad.setHour(0);
    triad.setMin(0);
    triad.setSec(0);
}

Time::Time(Triad t) {
    triad = t;
}

Time::Time(const Time& t) {
    this->triad = t.triad;
}

istream& operator >> (istream& in, Time& r) {
    in >> r.triad;
    return in;
}

Time::operator string () const {
    stringstream ss;
    ss << "h: " << triad.getHour() << "\nm: " << triad.getMin() << "\ns: " << triad.getSec() << endl;
    return ss.str();
}


ostream& operator << (ostream& out, const Time& r) {
    out << string(r);
    return out;
}

void Time::incremSec() {
    triad.incremSec();
}

void Time::operator+(int n) {
    triad.setMin(triad.getMin() + n);
}

void Time::operator*(int n) {
    triad.setSec(triad.getSec() + n);
}

Time& Time::operator ++() {
    ++triad;
    return *this;
}

Time& Time::operator --() {
    --triad;
    return *this;
}

Time Time::operator ++(int) {
    Time n(*this);
    triad++;
    return n;
}

Time Time::operator --(int) {
    Time n(*this);
    triad--;
    return n;
}