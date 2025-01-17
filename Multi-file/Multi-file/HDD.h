// ���� �������
#pragma once
class HDD {
private:
	// Fields
	char* name;
	const int memory;
	double price;

public:
	// Constructor, destructor
	HDD(const HDD& copy);
	HDD();
	HDD(const char* name, int memory, double price);
	~HDD();

	// Methods
	void Input();
	void Print();

	// Getters
	const char* GetName() const;
	const int GetMemory() const;
	double GetPrice() const;

	// Setters
	void SetName(const char* name);
	void SetPrice(double price);
};