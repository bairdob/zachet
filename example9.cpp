//example9.cpp
#include <iostream>
using namespace std;

class Example{
public:
	int data;
	Example (int n) {
		data = n;
	}
	friend ostream &operator<< (ostream &os,const Example &e); // перегразука оператора "<<" + вывод в поток os
};
ostream &operator<< (ostream &os,const Example &e){
		os << e.data;
		return os;
}
int main(){
	Example e(4);
	cout << e;
	return 0;
}