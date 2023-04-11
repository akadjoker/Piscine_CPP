/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:29:57 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/04/10 18:17:25 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <sstream>
#include <iomanip>

bool FileExists(const char *fileName)
{
	std::ifstream f(fileName);
	return f.good();
}

int fterror(const std::string &message)
{
	std::cout << "Error: " << message << std::endl;
	return 1;
}

int GetDateAndValue(const std::string &line, std::string &date, std::string &value)
{
	std::stringstream str(line);
	std::string word;
	int counter = 0;
	while (getline(str, word, '|'))
	{
		word.erase(std::remove_if(word.begin(), word.end(), ::isspace), word.end());
		if (!counter)
			date = word;
		else
			value = word;
		counter++;
	}
	return counter;
}

int DivideDate(const std::string &date, int &year, int &month, int &day)
{
	std::string datePart;
	std::stringstream wrd(date);
	int counter = 0;
	if (std::count(date.begin(), date.end(), '-') != 2)
		return std::count(date.begin(), date.end(), '-') + 1;
	while (getline(wrd, datePart, '-'))
	{
		if (!counter)
			year = std::atoi(datePart.c_str());
		else if (counter == 1)
			month = std::atoi(datePart.c_str());
		else
			day = std::atoi(datePart.c_str());
		counter++;
	}
	return counter;
}

void printBitcoinValue(const BitcoinExchange &BitcoinDataBase, const std::string &date, const float amount)
{
	time_t theTime = time(NULL);
	struct tm *aTime = localtime(&theTime);
	if (date == "date")
		return;
	int year, month, day;
	if (DivideDate(date, year, month, day) != 3)
		fterror("bad input => " + date);
	else if (year < 0 || year > aTime->tm_year + 1900 || month < 1 || month > 12 || day < 1 || day > 31)
		fterror("bad input => " + date);
	else if (year == aTime->tm_year + 1900 && month > aTime->tm_mon + 1)
		fterror("bad input => " + date);
	else if (year == aTime->tm_year + 1900 && month == aTime->tm_mon + 1 && day > aTime->tm_mday)
		fterror("bad input => " + date);
	else
	{
		std::cout << date << " => " << amount << " = ";
		// std::cout << std::fixed << std::setprecision(2) << BitcoinDataBase.valueOfBitcoin(amount, date) << std::endl;
		std::cout << BitcoinDataBase.valueOfBitcoin(amount, date) << std::endl;
	}
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Usage: " << argv[0] << " input.txt" << std::endl;
		return 1;
	}

	if (FileExists(argv[1]) == false)
		return fterror("file doesn't exist.");

	BitcoinExchange BitcoinDataBase("data.csv");
	std::ifstream file(argv[1]);
	std::string fileStr(argv[1]);
	if (!file)
		return fterror("could not open file.");
	if (fileStr.substr(fileStr.find_last_of(".") + 1) != "txt")
		return fterror("input file must be a '.txt' file.");
	std::string line, word, date, value;
	getline(file, line);
	if (line != "date | value")
		return fterror("file first line must have 'date | file'.");
	while (getline(file, line))
	{
		if (line.find_first_not_of("0123456789-|. ") != line.npos)
			fterror("bad input => " + line);
		else if (GetDateAndValue(line, date, value) != 2)
			fterror("bad input => " + line);
		else
		{
			if (BitcoinDataBase.canProcess(date))
			{
				double amount = (double)std::atof(value.c_str());
				if (amount < 0.0)
					fterror("not a positive number.");
				else if (amount > 1000.0)
					fterror("too large a number.");
				else
					printBitcoinValue(BitcoinDataBase, date, amount);
			}
			else
				fterror("bad input => " + date); // std::cerr << "Error: Date " << date << " is greater than the latest available date." << std::endl;
		}
	}
	file.close();

	return 0;
}