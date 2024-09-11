#include "../headers/Contact.hpp"
#include "../headers/PhoneBook.hpp"

int main(void)
{
	PhoneBook	my_book;
	std::string	option;

	while (1)
	{
		std::cout << "Please choose an option:" << std::endl;
		std::cout << "ADD, SEARCH or EXIT" << std::endl;
		std::getline(std::cin, option);
		if (option == "ADD")
			my_book.addContact();
		else if (option == "SEARCH")
			my_book.searchContact();
		else if (option == "EXIT")
			return 0;
		else
			std::cout << "Invalid Command!" << std::endl;
	}
	return (0);
}
