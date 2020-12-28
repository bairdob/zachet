//example8.cpp
#include <iostream>
using namespace std;
class Fish{
public:
	int weight;
	Fish (int n) {
		weight = n;
	};
	virtual void show(){
		cout << weight << endl;
	};

};
class Hybrid : public Fish{	//наследование
public:
	int height;
	Hybrid (int n, int m) : Fish(n){
		height = m;
	};
	Hybrid (const Fish &f, int m) : Fish(f){
		height = m;
	};
	virtual void show(){	//полиморфизм
		cout << weight << " " <<height << endl;
	};
};

	
int main(){
	Fish f(2);
	f.show();
	Hybrid h1(4,3);
	h1.show();
	Hybrid h2(f, 3);
	h2.show();
	return 0;
}