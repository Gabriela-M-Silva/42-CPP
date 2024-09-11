#include "../headers/Contact.hpp"
#include "../headers/PhoneBook.hpp"
#include "../headers/Utils.hpp"

bool is_empty(std::string const str)
{
	bool	is_empty = true;
	for (long unsigned int i = 0; i < str.length(); i++)
	{
		if (!str[i])
			break;
		if (!std::isspace(str[i]))
		{
			is_empty = false;
			break;
		}
	}
	if (is_empty)
		return (true);
	return (false);
}
