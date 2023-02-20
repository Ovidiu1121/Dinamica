#include <iostream>
using namespace std;


int  mem[1000]{};


int fib(int n) {

	if (mem[n] != 0) {

		return mem[n];
	 }

	if (n <= 2) {

		return 1;
	}

	mem[n] = fib(n - 1) + fib(n - 2);


	return mem[n];
}

int fib2(int n) {
	if (n <= 2) {

		return 1;
	}
	return fib2(n - 1) + fib2(n - 2);
}






















