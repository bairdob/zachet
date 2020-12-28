//example1.cpp
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
const int SIZE = 5;

int main(){
	int arr1[SIZE] = {6, 5, 4, 2, 0};

  	vector<int> arr2(arr1, arr1+4);
  	for (int i = 0; i < SIZE; i++){
  		cout << arr2[i] << " ";
  	} 
  	cout << endl;

  	sort(arr2.begin(),arr2.end());
  	
  	for (int i = 0; i < SIZE; i++){
  		cout << arr2[i] << " ";
  	} 

	return 0;
}
