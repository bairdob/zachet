//example20.cpp
#include <iostream>
#include <memory>
using namespace std;

class Example{
private:
	int data;
public:
	Example(int n){
		data = n;
		cout << "Created" << endl;
	}
	~Example(){
		cout << "Deleted" << endl;
	}
	void show(){
		cout << data << endl;
	}

};


int main(){
	shared_ptr<Example> ps (new Example(3));
	ps->show();
	return 0;
}