#include <iostream>
#include <algorithm>

using namespace std;

//============================
class A{
	int a;

	public: 
	   A() { this->a = 5; }
	   void display() { cout<<this->a<<endl; }
};	
//============================

int sizeArray(int* arr1){


	
   cout<<sizeof(arr1) / sizeof(arr1[0])<<endl<<endl;

   int arr[] = {1,2,3,4,5,6,7,8,9,10};	

   cout<<"arr = "<<arr<<endl;
   cout<<"sizeof(arr) = "<<sizeof(arr)<<endl;

   cout<<"arr[0] = "<<arr[0]<<endl; 
   cout<<"sizeof(arr[0]) = "<<sizeof(arr[0])<<endl;

   return sizeof(arr) / sizeof(arr[0]);

}	

//============================

void displayArray(int* arr, int n){

   for(size_t i=0; i<n; i++)
	   cout<<arr[i]<<" ";
   cout<<endl;
}

//===========================

void sortArray(int* arr, int n){

	sort(arr, arr+n);
}

//===========================

int main(int argc, char* argv[]){

	A *obj = new A();
	obj->display();

	cout<<"============================="<<endl;
        int arr[] = {1,3,5,4,2};     
        int n = sizeof(arr) / sizeof(arr[0]);

      	displayArray(arr, n);

	sortArray(arr, n);
	displayArray(arr, n);

	return 0;
} 




