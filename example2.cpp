//example2.cpp
#include <iostream>

using namespace std;

class Example{
private:
	int data;
public:
	Example(){ // явный конструктор по умполчанию
		data = 0;
	} 
	Example(int n){
		data = n;
	}
	Example (const Example &e){ //конструктор копирования
		data = e.data;
	} 
	Example operator=(const Example &e){ //оператор присваивания
		return Example(e.data);
	} 
	void show(){
		cout << data << endl;
	}
};

int main(){
	Example e1;
	e1.show();
	Example e2(3);
	e2.show();
	Example e3(e2);
	e3.show();
	Example e4 = e3;
	e4.show();
	return 0;
}