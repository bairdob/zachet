//example10.cpp
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
	Example operator+(const Example &e){ //перегрузка +
		Example tmp;
    	data = data + e.data;
		return tmp;
	} 
	void show(){
		cout << data << endl;
	}
};

int main(){
	Example e1(3);
	Example e2(2);
	Example e3;
	e1 = e1 + e2;
	e1.show();
	return 0;
}