//example14.cpp
#include <iostream>
using namespace std;

class Example{
private: //квалификатор доступа private
	int data;
public:
	Example(){
		data = 0;
	} 
	Example(int n){
		data = n;
	}
	void show(){
		cout << data << endl;
	}
};

int main(){
	Example e1(3);
	e1.show();
	return 0;
}