//example19.cpp
#include <iostream>
using namespace std;
const int SIZE = 5;

int change(int n){
	if (n == 0) return 1;
		else return 0;
}

void set (int *arr, int size, int (*p)(int)){
	for (int i = 0;i < SIZE; i++) arr[i] = p(arr[i]);
}

int main(){
	int (*p)(int);
	p = change;
	int arr[SIZE]={0,1,2,0,4};
	for (int i = 0;i < SIZE; i++) 
		cout << arr[i] << " ";
	cout << endl;

	set(arr,SIZE,p);
	for (int i = 0;i < SIZE; i++) 
		cout << arr[i] << " ";
	
	return 0;
}