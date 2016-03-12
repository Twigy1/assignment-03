#include<iostream>
#include<cmath>
#include<string>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int gcd(int a, int b) {
	if (a < 0) {
		a = -a;
	}
	if (b < 0) {
		b = -b;
	}
	if (a == 0 && b != 0) {

		return b;
	}
	else if (a != 0 && b == 0) {

		return a;
	}
	else if (a>b) {
		return gcd(a - b, b);

	}
	else {

		return(a, b - a);
	}
}

int fib(int n) {

	cout << n << endl;

	if (n < 1) throw "invalid n";

	if (n == 1) return 1;
	if (n == 2) return 1;

	return fib(n - 1) + fib(n - 2);

}

int pow(int c, int d) {
	if (d == 0)
		return 1;

	else
		return c*pow(c, d - 1);

	
}



int main() {
	//1st part
	
	int a;
	int b;

	cout << gcd(5, 6) << endl;


	//2nd part
	int i = 4; 
	
		cout << fib(i) << " ";

	cout << endl;

	cout << fib(1) << endl;


	//3rd part
	cout<< pow(5,6) << endl;

	system("pause");
	return 0;

}

