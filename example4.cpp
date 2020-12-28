//example4.cpp
#include <iostream>

using namespace std;

class Functor{
private:
	int data;
public:
	Functor(){};
	Functor(int n){
		data = n;
	};
	int operator()(int m){return data+m;};//функтор(функциональный объект) 
	void show(){
		cout << data << endl;
	}
};

int foo(int n){
	return n;
}
int main(){
	int (*p)(int); //p указывает на функцию, которая принимает int
	p = foo;
	cout << p(1) << endl;

	Functor f(1);
	f.show();
	int a = f(3);//вызов функтора
	cout << a << endl;

	auto Lambda = [](){  
        cout << "Hello World!" << endl;
    };	//лямбда выражение
    Lambda();
	return 0;
}