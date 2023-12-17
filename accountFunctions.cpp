#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
#include "accountFunctions.h"

using namespace std;


// defines functions used to receive input from the user and validates the inputs
double inputInvestment() {
	double userInvestment;

	cout << "Initial Investment Amount: ";
	cin >> userInvestment;
	while (userInvestment < 0) {		// loops while checking for positive value
		cout << endl << "Please enter a valid amount." << endl;
		cout << "Initial Investment Amount: ";
		cin >> userInvestment;
	}

	return userInvestment;
};

double inputDeposit() {
	double userDeposit;

	cout << "Monthly Deposit Amount: ";
	cin >> userDeposit;
	while (userDeposit < 0) {			// loops while checking for positive value
		cout << endl << "Please enter a valid amount." << endl;
		cout << "Monthly Deposit Amount: ";
		cin >> userDeposit;
	}

	return userDeposit;
};

double inputAnnualInterest() {
	double userAnnualInterest;

	cout << "Annual Interest: ";
	cin >> userAnnualInterest;
	while (userAnnualInterest < 0) {	// loops while checking for positive value
		cout << endl << "Please enter a valid interest rate." << endl;
		cout << "Annual Interest: ";
		cin >> userAnnualInterest;
	}

	return userAnnualInterest;
};

int inputNumYears() {
	int userNumYears;

	cout << "Number of Years: ";
	cin >> userNumYears;
	while (userNumYears < 0) {			// loops while checking for positive value
		cout << endl << "Please enter a valid number of years." << endl;
		cout << "Number of Years: ";
		cin >> userNumYears;
	}

	return userNumYears;
};


// definitions for 2 functions used to calculate and format balances and interests
void savingsWithoutMonthlyDeposits(double initialInvestment, double interestRate, int numberOfYears) {
	double monthlyInterest;
	double yearlyInterest;
	double savings;
	vector<double> savingsList;

	yearlyInterest = 0;
	savings = initialInvestment;
	for (int i = 1; i <= numberOfYears * 12; ++i) {		// for-loop calculates monthly interest rate and then total balance for a number of months defined by the user
		monthlyInterest = savings * (interestRate / 100 / 12);
		savings = savings + monthlyInterest;
		savingsList.push_back(savings);					// places each month's savings into a vector for simple access

		if (i % 12 == 0) {								// for-loop calculates and prints data for every 12 months that pass
			if (i != 12) {
				yearlyInterest = savings - savingsList.at(i - 13);			// for each year that is not the first year, calculates that specific year's interest gained
			}
			else {
				yearlyInterest = savings - initialInvestment;				// calculates interest gained for the first year since there is no prior year's data
			}
			cout << setfill(' ') << setw(4) << i / 12 << "." << fixed << setprecision(2) << setfill(' ') << setw(23) << savings << setfill(' ') << setw(32) << yearlyInterest << endl << endl;
		}
		else {
			continue;
		}
	}
};

void savingsWithMonthlyDeposits(double initialInvestment, double monthlyDeposit, double interestRate, int numberOfYears) {
	double monthlyInterest;
	double yearlyInterest;
	double savings;
	vector<double> savingsList;

	yearlyInterest = 0;
	savings = initialInvestment;
	for (int i = 1; i <= numberOfYears * 12; ++i) {		// for-loop calculates monthly interest rate and then total balance for a number of months defined by the user
		monthlyInterest = (savings + monthlyDeposit) * (interestRate / 100 / 12);
		savings = savings + monthlyDeposit + monthlyInterest;
		savingsList.push_back(savings);					// places each month's savings into a vector for simple access

		if (i % 12 == 0) {								// for-loop calculates and prints data for every 12 months that pass
			if (i != 12) {
				yearlyInterest = savings - savingsList.at(i - 13) - (monthlyDeposit * 12);		// for each year that is not the first year, calculates that specific year's interest gained
			}
			else {
				yearlyInterest = savings - initialInvestment - (monthlyDeposit * 12);			// calculates interest gained for the first year since there is no prior year's data
			}
			cout << setfill(' ') << setw(4) << i / 12 << "." << fixed << setprecision(2) << setfill(' ') << setw(23) << savings << setfill(' ') << setw(32) << yearlyInterest << endl << endl;
		}
		else {
			continue;
		}
	}
};