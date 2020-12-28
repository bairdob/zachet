//example17.cpp
#include <iostream>
using namespace std;
template <typename T>
T sub(T &a,T &b){
	return a+b;
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