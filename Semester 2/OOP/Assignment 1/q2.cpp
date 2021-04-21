#include<iostream>
using namespace std;

void add(int rows, int cols){
	int arrA[rows][cols], arrC[rows][cols], arrB[rows][cols];
	
	cout<<endl<<"Matrix A"<<endl;
	for(int row=0; row<rows; row++)
		for(int col=0; col<cols; col++){
			cout<<"Enter Value at Row = "<<row+1<<" Col = "<<col+1<<endl<<">> ";
			cin>>arrA[row][col];
		}
	
	cout<<endl<<"Matrix B"<<endl;
	for(int row=0; row<rows; row++)
		for(int col=0; col<cols; col++){
			cout<<"Enter Value at Row = "<<row+1<<" Col = "<<col+1<<endl<<">> ";
			cin>>arrB[row][col];
		}
	
	cout<<endl<<"Addition of Matrix A and B"<<endl;
	for(int row=0; row < rows; row++)
		for(int col=0; col < cols; col++)
			arrC[row][col] = arrA[row][col] + arrB[row][col];
	
	for(int row=0; row < rows; row++){
		for(int col=0; col < cols; col++)
			cout<<arrC[row][col]<<" ";
		cout<<endl;
	}
}


void subtract(int rows, int cols){
	int arrA[rows][cols], arrC[rows][cols], arrB[rows][cols];
	
	cout<<endl<<"Matrix A"<<endl;
	for(int row=0; row<rows; row++)
		for(int col=0; col<cols; col++){
			cout<<"Enter Value at Row = "<<row+1<<" Col = "<<col+1<<endl<<">> ";
			cin>>arrA[row][col];
		}
	
	cout<<endl<<"Matrix B"<<endl;
	for(int row=0; row<rows; row++)
		for(int col=0; col<cols; col++){
			cout<<"Enter Value at Row = "<<row+1<<" Col = "<<col+1<<endl<<">> ";
			cin>>arrB[row][col];
		}
	
	cout<<endl<<"Subtraction of Matrix A and B"<<endl;
	for(int row=0; row < rows; row++)
		for(int col=0; col < cols; col++)
			arrC[row][col] = arrA[row][col] - arrB[row][col];
	
	for(int row=0; row < rows; row++){
		for(int col=0; col < cols; col++)
			cout<<arrC[row][col]<<" ";
		cout<<endl;
	}
}



int main(){
	int rows,cols;
	cout<<"Enter Rows of Matrix\n>> ";cin>>rows;
	cout<<"Enter Cols of Matrix\n>> ";cin>>cols;
	
	add(rows,cols);
	
	subtract(rows,cols);
	
	return 0;
}
