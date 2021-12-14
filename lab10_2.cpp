#include<iostream>
using namespace std;

void printO (int x ,int y  ){
	if ( x > 0 && y > 0)
	{
		for (int i = 0; i < x ; i++)
		{
		    for (int t  = 0; t < y; t++){
			cout << 'O' ;
		    }
		cout << '\n' ;
		}
	}else 
	cout << "Invalid input" ;	
}



int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
