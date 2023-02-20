#include <iostream>
#include <fstream>
using namespace std;



int n, a[20][20], p[20][20], s[20][20];

void citire() {

	ifstream f("in.txt");

	f >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			f >> a[i][j];
		}
	}

}

void afisMat() {

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}

void init() {

	for (int i = 1; i <= n; i++) {
		s[n][i] = a[n][i];
	}

}

void dinamica() {

	for (int i = n - 1; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			if (s[i + 1][j] > s[i + 1][j + 1]) {
				s[i][j] = a[i][j] + s[i + 1][j];
				p[i][j] = 1;
			}
			else {
				s[i][j] = a[i][j] + s[i + 1][j + 1];
				p[i][j] = 2;
			}
		}
	}

}

void afisare() {

	int q = 1, r = 1;

	cout << "Suma maxima: " << s[1][1] << "= " << a[1][1] << "+";

	for (int i = 1, j = 1; i < n; i++) {
		if (p[i][j] == 2) {
			r = r + 1;
			j++;
		}
		q = q + 1;
		cout << a[q][r] << "+";
	}
	cout << "\n";
}

int f()
{
	citire();
	afisMat();
	init();
	dinamica();
	afisare();


}


















