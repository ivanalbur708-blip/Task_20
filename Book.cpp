#include "Book.h"
#include <iostream>

Book::Book(const char* author, const char* name, const char* publisher, int year, int page) : page(page) ,year(year)
{
	//Name
	if (name != nullptr)
	{
		int Size = strlen(name) + 1;
		this->name = new char[Size];
		strcpy_s(this->name, Size, name);
	}
	
	//Author
	if (author != nullptr)
	{
		int Size = strlen(author) + 1;
		this->author = new char[Size];
		strcpy_s(this->author, Size, author);
	}
	
	//Publisher
	if (publisher != nullptr)
	{
		int Size = strlen(publisher) + 1;
		this->publisher = new char[Size];
		strcpy_s(this->publisher, Size, publisher);
	}
	

}

Book::Book(const Book& other) : page(other.page),year(other.year)
{
	//Name copy
	if (other.name != nullptr)
	{
		int Size = strlen(other.name) + 1;
		name = new char[Size];
		strcpy_s(name, Size,other.name);
	}
	

	//Author copy
	if (other.author != nullptr)
	{
		int Size = strlen(other.author) + 1;
		author = new char[Size];
		strcpy_s(author, Size, other.author);
	}
	

	//Publisher copy
	if (other.publisher != nullptr)
	{
		int Size = strlen(other.publisher) + 1;
		publisher = new char[Size];
		strcpy_s(publisher, Size, other.publisher);
	}
	
}

Book::~Book()
{
	if (name != nullptr) delete[] name;
	if (author != nullptr) delete[] author;
	if (publisher != nullptr) delete[] publisher;
	
}

void Book::Print() const
{
	std::cout << "Author: " << author << '\n'
		<< "Name: " << name << '\n'
		<< "Publisher: " << publisher << '\n'
		<< "Page: " << page << '\n'
		<< "Year: " << year << std::endl;
}

