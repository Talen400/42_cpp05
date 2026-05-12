#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	{
		Form a;
		Form b(a);
		Form c = b;

		Form cidade("cidade", 4, 6);

		std::cout << cidade;
	}
}
