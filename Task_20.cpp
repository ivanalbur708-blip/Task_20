#include <iostream>
#include "Book.h"
#include  "Worker.h"

int main()
{
	//Task 1
	Book books[] = {
		Book("Author1","Name1","Publisher1",2020,100),
		Book("Author2","Name2","Publisher2",2021,110),
		Book("Author3","Name3","Publisher3",2022,120)
   };
	for (int i = 0;i < 3;i++) {
		if (strcmp(books[i].GetAuthor(),"Author1") == 0)
		{
			books[i].Print();
		}
		if (strcmp(books[i].GetNameBook(),"Name1") == 0 )
		{
			books[i].Print();
		}
		if (strcmp(books[i].GetPublisher(),"Publisher1") == 0)
		{
			books[i].Print();
		}
		if (books[i].GetPage() == 100)
		{
			books[i].Print();
		}
		if (books[i].GetYear() > 2019)
		{
			books[i].Print();
		}
	}

	//Task 2
	Worker worker[] = {
		Worker("Ivan Petrovych Kovalenko","Manager",2024,30000),
		Worker("Oleg Mykolaiovych Bondarenko","Programmer",2025,40000),
		Worker("Dmytro Serhiiovych Tkachenko", "Tester",2024,35000)
	};

	{
		for (int i = 0;i < 3;i++)
		{
			if (2026 - worker[i].getHireYear() > 1)
			{
				worker[i].Print();
			}
			if (worker[i].getSalary() > 32000)
			{
				worker[i].Print();
			}
			if (strcmp(worker[i].getPosition(),"Programmer") == 0)
			{
				worker[i].Print();
			}
		}
	}
}
