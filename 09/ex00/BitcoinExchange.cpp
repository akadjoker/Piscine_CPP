/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:27:07 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/04/10 18:46:46 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
} 

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src)
{
	this->m_dataBaseFileName = src.m_dataBaseFileName;
	this->m_bitcoinPrices.insert(src.m_bitcoinPrices.begin(), src.m_bitcoinPrices.end());
}

BitcoinExchange::BitcoinExchange(const std::string &dataBaseFileName)
{
	this->m_dataBaseFileName = dataBaseFileName;
	this->readCsvFile(dataBaseFileName);
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &rhs)
{
	if (this != &rhs)
	{
		this->m_dataBaseFileName = rhs.m_dataBaseFileName;
		this->m_bitcoinPrices.clear();
		this->m_bitcoinPrices.insert(rhs.m_bitcoinPrices.begin(), rhs.m_bitcoinPrices.end());
	}
	return *this;
}

std::ostream &operator<<(std::ostream &o, BitcoinExchange const &i)
{

	o << "Bitcoin prices were retrieved from " << i.getDataBaseFileName() << " file";
	return o;
}

bool BitcoinExchange::canProcess(const std::string &date)
{
	std::map<std::string, float>::iterator it = m_bitcoinPrices.lower_bound(date);

	// Verifica se encontramos a data exata ou uma data maior no mapa
	if (it != m_bitcoinPrices.end())
	{
		// Verifica se a data não é a primeira no mapa e se a data anterior está mais próxima
		if (it != m_bitcoinPrices.begin() && (it->first != date))
		{
			return true;
		}
		else
		{
			return true;
		}
	}

	return false;
}

float BitcoinExchange::valueOfBitcoin(const float amount, const std::string &date) const
{
	float rate = 0.0;

	// Encontre a taxa de câmbio e calcule o valor.
	std::map<std::string, float>::const_iterator it = m_bitcoinPrices.lower_bound(date);

	// Verifica se encontramos a data exata ou uma data maior no mapa
	if (it != m_bitcoinPrices.end())
	{
		// Verifica se a data não é a primeira no mapa e se a data anterior está mais próxima
		if (it != m_bitcoinPrices.begin() && (it->first != date))
		{
			std::map<std::string, float>::const_iterator prev = it;
			--prev;
			rate = prev->second;
		}
		else
		{
			rate = it->second;
		}
	}
	else
	{
		// Se chegarmos ao fim do mapa, usmaos o ultimo valor disponível.
		rate = (--it)->second;
	}

	return amount * rate;
}

void BitcoinExchange::readCsvFile(const std::string &fileName)
{
	std::ifstream file(fileName.c_str());
	if (!file)
		throw BitcoinExchange::ErrorReadingDataBase();

	std::string date;
	float exchange_rate = 0;
	while (file >> date)
	{
		exchange_rate = std::atof(date.substr(date.find(',', 0) + 1).c_str());
		date = date.substr(0, date.find(',', 0));
		this->m_bitcoinPrices[date] = exchange_rate;
	}
	file.close();
	this->m_bitcoinPrices.erase("date");
}

const std::string &BitcoinExchange::getDataBaseFileName() const
{
	return this->m_dataBaseFileName;
}
