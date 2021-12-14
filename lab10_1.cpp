#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	

	double l , r , y ;

	cout << "Enter initial loan: ";
	cin >> l ;
	cout << "Enter interest rate per year (%): ";
	cin >> r ;
	cout << "Enter amount you can pay per year: ";
	cin >> y ;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect

	int i = 0 ;
	double I , T , N ;

	while ( l > 0.00 )
	{
		cout << fixed << setprecision(2); 
		//EndOfYear#
		cout << setw(13) << left << 1+i; 
		//PrevBalance
		cout << setw(13) << left << l ;
		//Interest
		I = l*(r/100) ;
		cout << setw(13) << left << I ;
		//Total  
		T = l+I ;   
		cout << setw(13) << left << T ;

		//Payment   
		if( l > y )  {
			cout << setw(13) << left << y ;
		}else {
			if ( T > y ) {
				cout << setw(13) << left << y ;
			}else if( l < y ){
				y = T ;
				cout << setw(13) << left << y ;
			}
			
		}

		//NewBalance
		N = T-y ;
		cout << setw(13) << left << N  ;
		cout << "\n";	 
		l = N ;

		i++ ;
	}
	
	return 0;
}
