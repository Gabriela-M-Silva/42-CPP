#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <iomanip>

class PhoneBook
{
	private:
		Contact contacts[8];
		int		index;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	addContact(void);
		void	searchContact(void);
};

#endif