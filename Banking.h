//#pragma once
//#pragma warning(error: 4430)
#ifndef Banking_h
#define Banking_h
#include<string>
//#include<iostream>

using namespace std;

class Banking {
private:
	int NumYears;
	double InitialInvestment;
	double MonthlyDeposit;
	double InterestRate;
	double BeginningBalance;
	double Interest;
	double ClosingBalance;

	void calcBalance();
	void updateBalance();

public:
	Banking();
	

	//setters
	void setInitialInvestment(double);
	void setNumYears(int);
	void setMonthlyDeposit(double);
	void setInterestRate(double);

	//getters
	int getNumYears();
	double getInitialInvestment();
	double getMonthlyDeposit();
	double getInterestRate();

	void displayBalance();
};
#endif