#include<cstdio>
#include<iostream>

using namespace std;

class Kalkulator{
public:
	Kalkulator() {}
	double dodaj(double x, double y) {
		return x + y;
	}
	double dodaj(double x, double y, double z) {
		return dodaj(x, y) + z;
	}
};

void test_dodawania(Kalkulator calc) {
	cout << calc.dodaj(1, 2) << endl;
	cout << calc.dodaj(1, 2, 3) << endl;
}

int main() {
	Kalkulator calc;
	test_dodawania(calc);

}

