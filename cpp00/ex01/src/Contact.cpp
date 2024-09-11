#include "../headers/Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

std::string Contact::getFirstName(void) const
{
	return (this->firstName);
}

std::string Contact::getLastName(void) const
{
	return (this->lastName);
}

std::string Contact::getNickName(void) const
{
	return (this->nickName);
}

std::string Contact::getPhoneNumber(void) const
{
	return (this->phoneNumber);
}

std::string Contact::getDarkestSecret(void) const
{
	return (this->darkestSecret);
}

void Contact::setFirstName(std::string str)
{
	this->firstName = str;
	return ;
}

void Contact::setLastName(std::string str)
{
	this->lastName = str;
	return ;
}

void Contact::setNickName(std::string str)
{
	this->nickName = str;
	return ;
}

void Contact::setPhoneNumber(std::string str)
{
	this->phoneNumber = str;
	return ;
}

void Contact::setDarkestSecret(std::string str)
{
	this->darkestSecret = str;
	return ;
}
