//example17.cpp
#include <iostream>
using namespace std;

template <typename T>
class Example{
private: //квалификатор доступа private
	T data;
public:
	Example(){
		data = 0;
	} 
	Example(T n){
		data = n;
	}
	void show(){
		cout << data << endl;
	}
};
int main(){
	Example<int> e1(2);
	e1.show();
	Example<float> e2(2.5);
	e2	.show();
	return 0;
}