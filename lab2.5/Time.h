#pragma once
#include "Triad.h"
#include <string>
#include <sstream>

class Time
{
	Triad triad;
public:
	Time();
	Time(Triad);
	Time(const Time&);
	~Time() { };

	Triad getTriad() { return triad; };

	void setTriad(Triad t) { triad = t; };

	Time& operator ++();
	Time& operator --();
	Time operator ++(int);
	Time operator --(int);

	void operator+(int n);
	void operator*(int n);
	void incremSec();

	friend ostream& operator << (ostream& out, const Time& r);
	friend istream& operator >> (istream& in, Time& r);

	operator std::string() const;
};