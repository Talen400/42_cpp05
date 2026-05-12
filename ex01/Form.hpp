#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>

class Form
{
	private:
		const std::string	_name;
		int		_min_grade;
		int		_max_grade;
		bool	_sign;

	public:
		Form();
		Form(const std::string &name, int min_grade, int max_grade);
		Form	&operator=(const Form &other);

		~Form();

		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
		
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

		std::string	getName() const;
		int			getMinGrade() const;
		int			getMaxGrade() const;
		bool		getSign() const;

};

std::ostream	&operator<<(std::ostream &out, const Form &b);

#endif
