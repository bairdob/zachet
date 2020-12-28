//example7.cpp
#include <iostream>
using namespace std;
int equal(int a, int b){
	if (a == b) return 0;
		else return -1;
};
int main(){
	int a, b;
	a = 2; b = 1;
	cout << equal(a, b) << endl; 

	if (a > b) abort();
	
	return 0;
}