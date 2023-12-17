#pragma once
#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

// declares class and its public functions and private members
class SavingsAccount {
public:
	SavingsAccount();

	void SetInitialInvestment(double t_initialInvestment);
	void SetMonthlyDeposit(double t_monthlyDeposit);
	void SetAnnualInterest(double t_annualInterest);
	void SetNumberOfYears(int t_numberOfYears);

	double GetInitialInvestment();
	double GetMonthlyDeposit();
	double GetAnnualInterest();
	int GetNumberOfYears();

	void DisplayNoInputScreen();
	void DisplayInitialScreen();
	void DisplayFinalWithoutDeposits();
	void DisplayFinalWithDeposits();


private:
	double m_initialInvestment;
	double m_monthlyDeposit;
	double m_annualInterest;
	int m_numberOfYears;

};


#endif // !SAVINGSACCOUNT_H
