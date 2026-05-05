#include "Bureaucrat.hpp"

int	main(void)
{
	{
		Bureaucrat _v;
		Bureaucrat a("test", 150);
		Bureaucrat b(a);
		Bureaucrat c = b;

		std::cout << c.getGrade() << std::endl;
		std::cout << c.getName() << std::endl;
	}
}
