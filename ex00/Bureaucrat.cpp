#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("root"), _grade(1)
{
	std::cout << "Bureaucrat '" << _name << "' Construction Default" << std::endl;
};

Bureaucrat::Bureaucrat(const std::string &name, int grade): _name(name), _grade(grade)
{
	std::cout << "Bureaucrat '" << _name << "' Construction parameter" << std::endl;
};

Bureaucrat::Bureaucrat(const Bureaucrat &other): _grade(other._grade)
{
	std::cout << "Bureaucrat '" << _name << "' Construction from other Bureaucrat" << std::endl;
};

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
	{
		_grade = other._grade;
	}
	std::cout << "Bureaucrat '" << _name << "' Copy assignament" << std::endl;
	return *this;
};

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat '" << _name << "' Destruction" << std::endl;
};

std::string	Bureaucrat::getName() const
{
	return _name;
}

int	Bureaucrat::getGrade() const
{
	return _grade;
}

void	Bureaucrat::downGrade()
{
	_grade++;
}

void	Bureaucrat::upGrade()
{
	_grade--;
}
