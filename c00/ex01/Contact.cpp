# include "Contact.hpp"


Contact::Contact(void)
{
	
}

std::string	Contact::get_firstname(void)
{
	return (this->firstname);
}

std::string	Contact::get_lastname(void)
{
	return (this->lastname);
}

std::string	Contact::get_nickname(void)
{
	return (this->nickname);
}


std::string	Contact::get_phonenumber(void)
{
	return (this->phonenumber);
}


std::string	Contact::get_darkestsecret(void)
{
	return (this->darkestsecret);
}


void	Contact::set_firstname(std::string value)
{
	this->firstname = value;
}

void	Contact::set_lastname(std::string value)
{
	this->lastname = value;
}

void	Contact::set_nickname(std::string value)
{
	this->nickname = value;
}


void	Contact::set_phonenumber(std::string value)
{
	this->phonenumber = value;
}

void	Contact::set_darkestsecret(std::string value)
{
	this->darkestsecret = value;
}

bool Contact::is_empty(void)
{
	if (firstname.empty()|| lastname.empty() || nickname.empty() 	|| phonenumber.empty() 	|| darkestsecret.empty())
		return (true);
	return (false);
}