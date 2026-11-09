#include "Worker.h"
#include  <iostream>

Worker::Worker(const char* name, const char* position, int hireYear, double salary) :
hireYear(hireYear),salary(salary)
{
	if (name != nullptr)
	{
		int size = strlen(name) + 1;
		this->name = new char[size];
		strcpy_s(this->name, size, name);
	}

	if ( position != nullptr)
	{
		int size = strlen(position) + 1;
		this->position = new char[size];
		strcpy_s(this->position, size, position);
	}


}

Worker::Worker(const Worker& other) :
	hireYear(other.hireYear), salary(other.salary)
{
	if (other.name != nullptr)
	{
		int size = strlen(other.name) + 1;
		name = new char[size];
		strcpy_s(name, size, other.name);
	}

	if (other.position != nullptr)
	{
		int size = strlen(other.position) + 1;
		position = new char[size];
		strcpy_s(position, size, other.position);
	}
}

Worker::~Worker()
{
	if (name != nullptr) delete[] name;
	if (position != nullptr) delete[] position;
} 

void Worker::Print() const
{
	std::cout << "Name: " << name << '\n'
		<< "Position: " << position << '\n'
		<< "Hire year: " << hireYear << '\n'
		<< "Salary: " << salary << '\n';
}