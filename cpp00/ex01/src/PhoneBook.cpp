#include "../headers/Contact.hpp"
#include "../headers/PhoneBook.hpp"
#include "../headers/Utils.hpp"

PhoneBook::PhoneBook(void)
{
	index = 0;
	std::cout << "Welcome!" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Goodbye!" << std::endl;
	return ;
}

void PhoneBook::addContact(void)
{
	std::string	answer;

	answer = "";
	while (1)
	{
		std::cout << "First name: ";
		std::getline(std::cin, answer);
		if (!is_empty(answer))
		{
			this->contacts[this->index % 8].setFirstName(answer);
			break ;
		}
	}

	answer = "";
	while (1)
	{
		std::cout << "Last name: ";
		std::getline(std::cin, answer);
		if (!is_empty(answer))
		{
			this->contacts[this->index % 8].setLastName(answer);
			break ;
		}
	}
	
	answer = "";
	while (1)
	{
		std::cout << "Nickname: "; 
		std::getline(std::cin, answer);
		if (!is_empty(answer))
		{
			this->contacts[this->index % 8].setNickName(answer);
			break ;
		}
	}

	answer = "";
	while (1)
	{
		std::cout << "Phone number: ";
		std::getline(std::cin, answer);
		if (!is_empty(answer))
		{
			this->contacts[this->index % 8].setPhoneNumber(answer);
			break ;
		}
	}
	
	answer = "";
	while (1)
	{
		std::cout << "Darkest secret: ";
		std::getline(std::cin, answer);
		if (!is_empty(answer))
		{
			this->contacts[this->index % 8].setDarkestSecret(answer);
			break ;
		}
	}

	std::cout << "Contact added!" << std::endl;
	this->index++;
}

void PhoneBook::searchContact(void)
{
	if(this->index == 0)
	{
		std::cout << "PhoneBook is empty!" << std::endl;
		return ;
	}

	std::cout << std::right;
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First name" << "|"
              << std::setw(10) << "Last name" << "|"
              << std::setw(10) << "Nickname" << std::endl;

    for (int i = 0; i < index; ++i)
	{
        std::cout << std::setw(10) << i + 1 << "|"
                  << std::setw(10) << (contacts[i].getFirstName().length() > 9 ? contacts[i].getFirstName().substr(0, 9) + "." : contacts[i].getFirstName()) << "|"
                  << std::setw(10) << (contacts[i].getLastName().length() > 9 ? contacts[i].getLastName().substr(0, 9) + "." : contacts[i].getLastName()) << "|"
                  << std::setw(10) << (contacts[i].getNickName().length() > 9 ? contacts[i].getNickName().substr(0, 9) + "." : contacts[i].getNickName()) << std::endl;
    }

	while (1)
	{
		std::string	answer;
    	int			selectedIndex;

		std::cout << "Search contact index: ";
  		std::getline(std::cin, answer);
		if (answer.size() == 1 && answer[0] >= '1' && answer[0] <= '8')
		{
			selectedIndex = answer[0] - '0';
			if (selectedIndex <= index)
			{
				std::cout << "First name: " << contacts[selectedIndex - 1].getFirstName() << std::endl;
  	    		std::cout << "Last name: " << contacts[selectedIndex - 1].getLastName() << std::endl;
  	    		std::cout << "Nickname: " << contacts[selectedIndex - 1].getNickName() << std::endl;
  	    		std::cout << "Phone number: " << contacts[selectedIndex - 1].getPhoneNumber() << std::endl;
        		std::cout << "Darkest secret: " << contacts[selectedIndex - 1].getDarkestSecret() << std::endl;
				break ;
			}
			else
				std::cout << "Invalid index." << std::endl;
		}
		else
			std::cout << "Invalid index." << std::endl;
	}
}
