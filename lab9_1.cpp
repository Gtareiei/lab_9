#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
    double loan , rate , pay,PrevBalance,Interest  ;
    double Total,NewBalance ;
	cout << "Enter initial loan: ";
	cin>>loan ;
	cout << "Enter interest rate per year (%): ";
	cin>>rate ;
	cout << "Enter amount you can pay per year: ";
	cin>>pay ;
	int year = 1 ;
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
	while(loan!=0)
	{
    	    
    	
    	PrevBalance = loan ;
    	Interest = loan*rate/100 ;
    	Total = PrevBalance+Interest ;
    	  if(Total<pay)
    	 pay=Total ;
    	  else  
    	 pay=pay ;
    	NewBalance = Total - pay ; 
    	loan=NewBalance ;
    	
    
    	
    	
    	
    	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
    	//you can change input argument of 'setprecision()' to see the effect
    	cout << fixed << setprecision(2); 
    	cout << setw(13) << left << year++; 
    	cout << setw(13) << left << PrevBalance;
    	cout << setw(13) << left << Interest;
    	cout << setw(13) << left << Total;
    	cout << setw(13) << left << pay;
    	cout << setw(13) << left << NewBalance;
    	cout << "\n";	
	}
	return 0;
}