/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:26:42 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/04/10 18:17:19 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <map>
#include <ctime>

class BitcoinExchange
{

public:
	BitcoinExchange(const std::string &dataBaseFileName);
	BitcoinExchange(BitcoinExchange const &src);
	~BitcoinExchange();
	BitcoinExchange &operator=(const BitcoinExchange &rhs);

	float valueOfBitcoin(const float amount, const std::string &date) const;

	bool canProcess(const std::string &date);
	const std::string &getDataBaseFileName() const;

	class ErrorReadingDataBase : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "BitcoinExchange error: count't read data base file correctly!";
		}
	};

private:
	std::string m_dataBaseFileName;
	std::map<std::string, float> m_bitcoinPrices;

	void readCsvFile(const std::string &fileName);

	BitcoinExchange();
};

std::ostream &operator<<(std::ostream &o, const BitcoinExchange &i);

#endif