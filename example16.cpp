//example16.cpp
#include <iostream>
#include <vector>
using namespace std;

int main(){
 	vector<int> v = {0, 1, 2, 3, 4, 5};
 
    for (auto i : v) // range цикл
        cout << i << ' ';
   
	int *ptr = nullptr; //введение стандарта с++11 тоже самое что NULL из Си
	return 0;
}