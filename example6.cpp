//example6.cpp
#include <iostream>
using namespace std;

double divizion(double a, double b){
	if (b == 0) throw "divizion by zero";
	return a / b;
};
int main(){
	double a, b, c;
	a = 2; b = 0;
	try{
		c = divizion(a, b);
	}
	catch (const char *s){
		cout << s;
	}
	return 0;
}