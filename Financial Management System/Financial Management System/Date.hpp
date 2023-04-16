#pragma once

class Date {
private:
	unsigned short year;
	unsigned short month;
	unsigned short day;
	
public:
	Date();
	Date(unsigned short day, unsigned short month, unsigned short year);

	void Show() const;
	void Init();

	short GetDay() const;
	short GetMonth() const;
	short GetYear() const;

	bool isLeap() const;
	int daysInMonth() const;
	int daysInYear() const;
	int daysFromBegin() const;
};

std::ostream& operator << (std::ostream& o, const Date& d);