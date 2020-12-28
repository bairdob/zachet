//example15.cpp
#include <iostream>
using namespace std;

namespace one{
	void show(){
		cout << "namespace one" << endl;
	}
}
namespace two{
	void show(){
		cout << "namespace two" << endl;
	}
}
void show(){
		cout << "namespace global" << endl;
}
int main(){
	show();
	one::show();
	two::show();
	int n = 1;
	cout << n << endl;
	{
		int m = 2;
		cout << m << endl;
	}
	cout << m << endl; //ошибка компиляции m видимо только в блоке {}
	return 0;
}