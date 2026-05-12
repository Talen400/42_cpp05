#include "Form.hpp"

Form::Form() {};
Form::Form(const std::string &name, int min_grade, int max_grade):
	_name(name), _min_grade(min_grade), _max_grade(max_grade), _sign(0)
{};

Form	&Form::operator=(const Form &other)
{
	if (this != &other)
	{
		_min_grade = other._min_grade;
		_max_grade = other._max_grade;
		_sign = other._sign;
	}
	return (*this);
};

Form::~Form()
{

};

std::string	Form::getName() const {	return (_name);}
int			Form::getMinGrade() const { return (_min_grade);}
int			Form::getMaxGrade() const { return (_max_grade);}
bool		Form::getSign() const { return (_sign);}

std::ostream	&operator<<(std::ostream &out, const Form &b)
{
	out << "Info Form '" << b.getName() << "' :" << std::endl
		<< "min_grade: " << b.getMinGrade() << std::endl
		<< "max_grade: " << b.getMaxGrade() << std::endl
		<< "sign: " << (b.getSign() ? "TRUE" : "FALSE")
		<< std::endl;
	return out;
}
