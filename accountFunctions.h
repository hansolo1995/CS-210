#pragma once
#ifndef ACCOUNTFUNCTIONS_H
#define ACCOUNTFUNCTIONS_H

// declares functions used to receive input from the user
double inputInvestment();

double inputDeposit();

double inputAnnualInterest();

int inputNumYears();


// declares functions used to calculate and format balances with and without monthly deposits
void savingsWithoutMonthlyDeposits(double initialInvestment, double interestRate, int numberOfYears);

void savingsWithMonthlyDeposits(double initialInvestment, double monthlyDeposit, double interestRate, int numberOfYears);


#endif // !ACCOUNTFUNCTIONS_H