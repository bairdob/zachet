//example13.cpp
#include <iostream>
using namespace std;
int main(){
	int a = 3.4; //float преобразован в int
	float b = 4; //int преобразован в float 
	cout << static_cast<int>(b) / 3; //приведение b к int
	return 0;
}