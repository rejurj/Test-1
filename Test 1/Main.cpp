#include <iostream>
#include <cstdio>

struct Student
{
	int reg_no;
	char name[20];
	short CE;
	short PE;
	short TE;

};
int main()
{

	Student s;

	std::cout << "ENTER REGISTER NUMBER"<< std:: endl;

	std::cin >> s.reg_no;
	if (s.reg_no == 0)
	{
		return 0 ;
	}

	fflush(stdin);

	std::cout << "Name::" << std::endl;
	gets_s (s.name);
	std::cin >> s.name;
	std::cout << "Enter PE,CE,TE" << std::endl;
	std::cin >> s.PE >> s.CE >> s.TE;
	int total = s.CE + s.PE + s.TE;
	if (total < 600)
	{

		std::cout << "Name::" << s.name << std::endl;

		std::cout << "reg no::" << s.reg_no << std::endl;

		std::cout << "your total score is " << total << std::endl;
		if (total < 36) {

			std::cout << "Failure is the best lesson to win";

		}
		else
		{
			std::cout << "CONGRATS";
		}






		std::cin.get();
	}
	else
		std::cout << "Just look  at the total";
	return 0;

}