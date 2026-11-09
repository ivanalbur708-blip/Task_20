#pragma once

class Worker
{
private:
	char* name = nullptr;
	char* position = nullptr;
	int hireYear = 0;
	double salary = 0;
public:
	explicit Worker(const char* name, const char* position, int hireYear, double salary);

	~Worker();

	Worker(const Worker& other);

	const char* getName() const { return name; }
	const char* getPosition() const { return position; }

	int getHireYear() const { return hireYear; }
	double getSalary() const { return salary; }

	void Print() const;
};

