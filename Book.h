#pragma once
class Book
{
private:
	char* author = nullptr;
	char* publisher = nullptr;
	char* name = nullptr;
	int page = 0;
	int year = 0;
public:
	explicit Book(const char* author, const char* name, const char* publisher, int year, int page);
	~Book();
	Book(const Book& other);
	const char* GetAuthor() const { return author; }
	const char* GetNameBook() const { return name; }
	const char* GetPublisher() const { return publisher; }
	int GetPage() const { return page; }
	int GetYear() const { return year; }

	void Print() const;


};

