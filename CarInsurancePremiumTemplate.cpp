/**********************************************************************
*
* Name: 
*
*
* Calculates the car insurance premium based on the following rules:
* - (Gender); (Age); (Annual Premium)
* - Male; Under 21; 1500 + 200 for every ticket on record
* - Male; 21 to 29; 1200 + 100 for every ticket on record
* - Male; 30 and older; 1000 + 100 for every ticket on record
* - Female; Under 21; 1200 + 200 for every ticket on record
* - Female; 21 and older; 1000 + 100 for every ticket on record
*
***********************************************************************/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{

	char gender; // The customer's gender
	int age = 0; // The customer's age
	int numTix = 0; // Number of tickets the customer has had
	int premium = 0; // Customer's insurance premium

	// Get information from the user
	// We will assume that the user always enters correct input
	
	// Get the user's gender
	cout << "Enter your gender (M/F): ";
	cin >> gender;
	
	// Get the user's age
	cout << "Enter your age as an integer: ";
	cin >> age;
	
	// Get the number of tickets
	cout << "How many tickets do you have: ";
	cin >> numTix;

/**********************************************************************	
* Using nested decision structures to calculate the insurance premium *
*                                                                     *
***********************************************************************/	
	if (gender == 'M')
	{
		if (age < 21)
		{
			premium = 1500 + 200 * numTix;
		}
		else
		{
			if (age >= 21 and age <= 29)
			{
				premium = 1200 + 100 * numTix;
			}
			else
			{
				if (age > 29)
				{
					premium = 1000 + 100 * numTix;
				}
			}
		}
	}
	else
	{
		if (gender == 'F')
		{
			if (age <= 21)
			{
				premium = 1200 + 200 * numTix;	
			}	
			else
			{
				if (age > 21)
				{
					premium = 1000 + 100 * numTix;
				}
			}	
		}
	}
	
    // Prints the result
    cout << fixed << setprecision(2);
	cout << "Your premium is $" << premium << endl;
    
	return 0;
}

