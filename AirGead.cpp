#include<iostream>
#include<iomanip>
#include"Banking.h"

using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;
//using std::sets;
using std::right;
using std::left;
using std::string;


void Banking::calcBalance()
{
	(InitialInvestment * Interest);
}

void Banking::updateBalance()
{ 
	(InitialInvestment + (MonthlyDeposit * Interest));
}

Banking::Banking() {
	NumYears = 0;
	InitialInvestment = 0.0;
	MonthlyDeposit = 0.0;
	InterestRate = 0.0;
	BeginningBalance = 0.0;
	Interest = 0.0;
	ClosingBalance = 0.0;
}

void Banking::setInitialInvestment(double initialInvestment)
{
	this->InitialInvestment = initialInvestment;
}

void Banking::setNumYears(int numYears)
{
	this->NumYears = numYears;
}

void Banking::setMonthlyDeposit(double monthlyDeposit)
{
	this->MonthlyDeposit = monthlyDeposit;
}

void Banking::setInterestRate(double interestRate)
{
	this->InterestRate = interestRate;
}

int Banking::getNumYears()
{
	return 0;
}

double Banking::getInitialInvestment()
{
	return 0.0;
}

double Banking::getMonthlyDeposit()
{
	return 0.0;
}

double Banking::getInterestRate()
{
	return 0.0;
}


int main() {
	int numYears;
	double initialInvestment = 0.0;
	double interestRate = 0.0;
	double beginningBalance = 0.0;
	double monthlyDeposit = 0.0;
	double closingBalance = 0.0;
	double interest = 0.0;
	double calcBalance = 0.0;
	double updateBalance = 0.0;

	beginningBalance = (initialInvestment + monthlyDeposit);
	interest = ((initialInvestment + 50) * ((interestRate/100) /12));
	closingBalance = (beginningBalance + interest);

	cout << "Enter number of years" << endl;
	cin >> numYears;

	cout << "Enter initial investment" << endl;
	cin >> initialInvestment;

	cout << "What is the interest rate" << endl;
	cin >> interestRate;

	cout << "What is your Deposit for the month" << endl;
	cin >> monthlyDeposit;

	cout << "****************" << endl;
 	cout << "******** Data Input ********" << endl;
	cout << "Initial Investment:	$" << initialInvestment << endl;
	cout << "Monthly Deposit:	$" << monthlyDeposit << endl;
	cout << "Annual Interest:	%" << interestRate << endl;
	cout << "Number of Years:	" << numYears << endl;

	cout << "****************" << endl;
	cout << "Static Report 1" << endl;
	cout << "****************" << endl;
	cout << "Balance and Interest Without Additional Monthly Deposits" << endl;
	cout << "-------------------" << endl;
	cout << "-------------------" << endl;
	cout << calcBalance << endl;

	cout << "Static Report 2" << endl;
	cout << "****************" << endl;
	cout << "Balance and Interest With Additional Monthly Deposits" << endl;
	cout << "-------------------" << endl;
	cout << "-------------------" << endl;
	cout << updateBalance << endl;

	return 0;
}

