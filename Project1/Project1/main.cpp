#include <iostream>

using namespace std; 

int main() {

	int arr[] = { 4, 6, 8 }; 

	cout << arr << endl; 
	cout << arr[0] << endl; 
	cout << *arr << endl; 

	int* arrptr = arr; 
	cout << arrptr[0] << endl;

	  // pointer notation             // array notation     
	cout << *(arrptr + 2) << endl;  // arr[2]
	cout << *arrptr + 2 << endl; 




	return 0; 


}