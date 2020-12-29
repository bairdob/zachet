//example17.cpp
#include <iostream>
using namespace std;
template <typename T>
int larger(T &a,T &b){
	if (a > b) return a;
		else return b;
}
int main(){
	int a, b;
	a = 3; b = 4;
	float c, d;
	c = 1.1; d = 4.5;
	cout << sub(a,b) << endl;
	cout << sub(c,d) << endl;
	return 0;
}