#include "Time.h"
#include <iostream>

using namespace std;

int main() {
	Time t1;
	Triad tr1, tr2;

	cout << "t1 = "; cin >> t1;
	cout << t1 << endl;

	cout << "tr1 = "; cin >> tr1;
	Time t2(tr1);
	cout << "t2: " << t2 << endl;

	++t2;
	t2++;
	t2.incremSec();
	cout << "t2(increm) = " << t2 << endl;

	int n;
	cout << "(minute) n = "; cin >> n;
	t2 + n;
	cout << "(second) n = "; cin >> n;
	t2* n;
	cout << "t2 + n = " << t2 << endl;

	tr2 = t1.getTriad();
	cout << "tr2: " << endl;
	cout << "tr2: " << tr2 << endl;
}