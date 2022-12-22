#pragma once
class Account {
private:
	char* name;
	char* surname;
	int checkNumber;
	double percent;
	double sum;

public:
	Account();
	Account(const char* name, const char* surname, int checkNumber, double percent, double sum);
	Account(const Account& copy);
	~Account();

	// Setters
	void setName(const char* name);
	void setSurname(const char* surname);
	void setCheckNumber(int checkNumber);
	void setPercent(double percent);
	void setSum(double sum);

	// Getters
	const char* getName();
	const char* getSurname();
	int getCheckNumber();
	double getPercent();
	double getSum();

	void showInfo();
	void initAccount();

	void changeOfOwnership(const char* newOwnerName, const char* newOwnerSurname);
	void withdrawMoney(int amount);
	void addMoney(int amount);
	void addPercents(double percents);
	double toUSD();
	double toEUR();
};