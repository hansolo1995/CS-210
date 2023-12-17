#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>

#include "SavingsAccount.h"

using namespace std;


// initialized constructor
SavingsAccount::SavingsAccount() {

	m_initialInvestment = 0;
	m_monthlyDeposit = 0;
	m_annualInterest = 0;
	m_numberOfYears = 0;

};

// 4 functions to set user's inputs
void SavingsAccount::SetInitialInvestment(double t_initialInvestment) {
	m_initialInvestment = t_initialInvestment;
};

void SavingsAccount::SetMonthlyDeposit(double t_monthlyDeposit) {
	m_monthlyDeposit = t_monthlyDeposit;
};

void SavingsAccount::SetAnnualInterest(double t_annualInterest) {
	m_annualInterest = t_annualInterest;
};

void SavingsAccount::SetNumberOfYears(int t_numberOfYears) {
	m_numberOfYears = t_numberOfYears;
};

// 4 functions to get user's inputs
double SavingsAccount::GetInitialInvestment() {
	return m_initialInvestment;
};

double SavingsAccount::GetMonthlyDeposit() {
	return m_monthlyDeposit;
};

double SavingsAccount::GetAnnualInterest() {
	return m_annualInterest;
};

int SavingsAccount::GetNumberOfYears() {
	return m_numberOfYears;
};


// function to display the default data screen with no input
void SavingsAccount::DisplayNoInputScreen() {
	cout << "                 Welcome to Airgead Banking                 " << endl;
	cout << "============================================================" << endl;
	cout << "************************ Data Input ************************" << endl;
	cout << "------------------------------------------------------------" << endl << endl;
	cout << "Initial Investment Amount:" << endl;
	cout << "Monthly Deposit Amount:" << endl;
	cout << "Annual Interest:" << endl;
	cout << "Number of years:" << endl << endl;
	cout << "============================================================" << endl << endl;

	system("pause");

	cout << endl;
};

// function to display the data screen with user's inputs
void SavingsAccount::DisplayInitialScreen() {
	cout << endl << endl;
	cout << "************************ User Input ************************" << endl;
	cout << "------------------------------------------------------------" << endl << endl;
	cout << "Initial Investment Amount: $" << fixed << setprecision(2) << GetInitialInvestment() << endl;
	cout << "Monthly Deposit Amount: $" << GetMonthlyDeposit() << endl;
	cout << "Annual Interest: " << GetAnnualInterest() << "%" << endl;
	cout << "Number of years: " << GetNumberOfYears() << " years" << endl << endl;
	cout << "============================================================" << endl << endl;

	system("pause");

	cout << endl;
};

// function to display the title screen for the calculations without monthly deposits
void SavingsAccount::DisplayFinalWithoutDeposits() {
	cout << endl << endl;
	cout << "============================================================" << endl;
	cout << "      Balance and Interest Without Additional Deposits      " << endl;
	cout << "------------------------------------------------------------" << endl;
	cout << "Year    Year-End Balance ($)    Year-End Earned Interest ($)" << endl;
	cout << "____    ____________________    ____________________________" << endl << endl;
};

// function to display the title screen for the calculations with monthly deposits
void SavingsAccount::DisplayFinalWithDeposits() {
	cout << endl << endl;
	cout << "============================================================" << endl;
	cout << "      Balance and Interest Without Additional Deposits      " << endl;
	cout << "------------------------------------------------------------" << endl;
	cout << "Year    Year-End Balance ($)    Year-End Earned Interest ($)" << endl;
	cout << "____    ____________________    ____________________________" << endl << endl;
};