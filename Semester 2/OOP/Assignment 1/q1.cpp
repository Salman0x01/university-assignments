//
//Q1: Write a program that will define a function which will get an array and the (5)
//number to be searched. If the number is found in the array, then the function
//will print the message "Search successful" and the total count of numbers,
//else message "Item not found" will be printed.
//


#include<iostream>
using namespace std;

bool search(int arr[], int num){
	for(int i=0; i < sizeof(arr); i++)
		if(num==arr[i])
			return true;
	return false;
}

int main(){
	int arr[10],num;
	for (int i = 0; i < sizeof(arr);i++) {
		arr[i] = i+1;
   }
    cout<<"Enter Number to Search\n>> ";
	cin>>num;
	if(search(arr,num))
		cout<<"Search Successful";
	else
		cout<<"Item not Found";
	return 0;
}
