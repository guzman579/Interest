//Interest.cpp
//Compound interest calculations with for
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
		double amount; // amount on deposit at end of each year
		double principal = 1000.0; // initial amount before interest
		double rate = 0.05; // interest rate

		// display headers
		cout<< "Year          Amount on deposit"<<endl;

		// calculate amount on deposit for each of ten years
		for (int year = 1; year <= 10; year++)
		{
			// calculate new amount for specified year
			amount = principal * (pow((1.0 + rate), year));

			// display the year and the amount
			cout<< year<<"             "<< amount<<endl;
		}
		system("pause");
} // end class 
