#include<cstdio>
#include<iostream>

using namespace std;

class Kalkulator{
public:
	Kalkulator() {}
	double dodaj(double x, double y) {
		return x + y;
	}
};

void test_dodawania(Kalkulator calc) {
	cout << calc.dodaj(1, 2);
}

int main() {
	Kalkulator calc;
	test_dodawania(calc);

}

