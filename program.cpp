#include<cstdio>
#include<iostream>

using namespace std;

class Kalkulator{
public:
	Kalkulator() {}
	double dodaj(double x, double y) {
		return x + y;
	}
	double mnoz(double x, double y) {
		return x * y;
	}
	double mnoz(double x, double y, double z) {
		return mnoz(x, y) * z;
	}
};

void test_dodawania(Kalkulator calc) {
	cout << calc.dodaj(1, 2) << endl;
	cout << calc.mnoz(3, 4) << endl;
	cout << calc.mnoz(3, 4, 5) << endl;
}

int main() {
	Kalkulator calc;
	test_dodawania(calc);

}

