//example20.cpp
#include <iostream>
using namespace std;

void one(int a){ //передача по значению
	cout << a << endl;
}
void two(int &a){ //передача по ссылке позволяет изменять объект
	a = 1; 		
	cout << a << endl;
}
void three(int *a){ //передача по указателю аналогично Си
	*a = 2; 		
	cout << *a << endl;
}
void four(const int &a){
	//a = 3; строчка не скомпилируются тк в параметре передачи const
	cout << a << endl;
}

int main(){
	int a = 0;
	one(a);
	two(a);
	cout << a << endl;
	three(&a);
	cout << a << endl;
	int b = 3;
	four(b);
	return 0;
}