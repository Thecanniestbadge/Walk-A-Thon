// Programmer:		Thecanniestbadge
// Date:			5/24/2023
// Program Name:	Walk-A-Thon
// Description:		Write a program to calculate the amount of money raised by a walk-a-thon. Ask the user for the number of miles walked (as an integer), and the amount pledged per mile (as a double). 
//					Then calculate and display the amount of money that would be raised.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations
	int userMilesWalked;
	double amountPerMile;
	double totalMoneyRaised;
	// *** Your program goes here ***
	// *** Input ***
	printf("Enter the number of miles walked: ");
	scanf("%d", &userMilesWalked);
	printf("Enter the amount pledged per mile: $");
	scanf("%lf", &amountPerMile);
	printf("\n"); // Blank line

	// *** PROCESSING ***
	// Calculates the amount of money raised by multiplying the miles walked by the amount pledged per mile
	totalMoneyRaised = userMilesWalked * amountPerMile;

	// *** OUTPUT ***
	printf("The amount of money raised by walking %d miles\n", userMilesWalked);
	printf("at $%.2f per mile is $%.2f.\n", amountPerMile, totalMoneyRaised);
	printf("\n"); // Blank line

	return 0;
} // end main()