#include <iostream>
using namespace std;

// f(7,[5,3,4,7])-> true (3+4=7)// 0 1=>True 2=>false

int mem[100]{}, i = 0, j = 0;

bool f(int n, int v[], int d) {

	for (int i = 0; i < d; i++) {
		for (int j = i+1; j < d-1; j++) {
			if (v[i] + v[j] == n) {
				return true;
			}
		}
	}
	return false;

}

int  canSum(int targetSum, int numbers[],int d) {

	 
	if (mem[targetSum] != 0) {
		return mem[targetSum];
	}

	if (targetSum == 0) {

		return 1;
	}

	if (targetSum < 0) {

		return 2;
	}


	for (int i = 0; i < d; i++) {
		
		int remainder = targetSum - numbers[i];
		if (canSum(remainder, numbers, d)==1) {


		
			mem[targetSum] = 1;

			return mem[targetSum];

		}
	}

	mem[targetSum] = 2;

	return mem[targetSum];
}



















