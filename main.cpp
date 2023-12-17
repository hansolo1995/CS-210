#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>

// include header files to ensure main.cpp has access to necessary function declarations and definitions
#include "SavingsAccount.h"		
#include "accountFunctions.h"

using namespace std;


int main() {
	SavingsAccount InterestCalculator;		// create SavingsAccount object

	char userChoice;

	userChoice = 'y';						// assume user will use the program at least once after program start

	InterestCalculator.DisplayNoInputScreen();		// displays screen with no input data

	while (userChoice == 'y' || userChoice == 'Y') {					// while-loop to continue running program

		// sets all of the user's input data
		InterestCalculator.SetInitialInvestment(inputInvestment());
		InterestCalculator.SetMonthlyDeposit(inputDeposit());
		InterestCalculator.SetAnnualInterest(inputAnnualInterest());
		InterestCalculator.SetNumberOfYears(inputNumYears());

		InterestCalculator.DisplayInitialScreen();	// displays screen with user's input data

		// displays screen with yearly data for balances and interests without monthly deposits
		InterestCalculator.DisplayFinalWithoutDeposits();				
		savingsWithoutMonthlyDeposits(InterestCalculator.GetInitialInvestment(), InterestCalculator.GetAnnualInterest(), InterestCalculator.GetNumberOfYears());

		cout << endl;

		// displays screen with yearly data for balances and interests with monthly deposits
		InterestCalculator.DisplayFinalWithDeposits();
		savingsWithMonthlyDeposits(InterestCalculator.GetInitialInvestment(), InterestCalculator.GetMonthlyDeposit(), InterestCalculator.GetAnnualInterest(), InterestCalculator.GetNumberOfYears());

		system("pause");

		cout << "Would you like to continue using the program? (Y/N) ";	// asks user if they would like to continue using the program; exits the program if 'y' is not pressed
		cin >> userChoice;
		cout << endl << endl;
	}
	
	cout << endl << endl;
	cout << "Thank you for banking with Airgead Banking!" << endl;

	return 0;
};