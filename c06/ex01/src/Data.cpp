/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:54:52 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/21 15:50:39 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() 
	: m_name("default"), m_size(1478), m_ratio(0.5f)
{
	std::cout << "Default Construtor called for Data" << std::endl;
}

Data::Data(Data &data) 
 : m_name(data.m_name), m_size(data.m_size), m_ratio(data.m_ratio) 
{
		std::cout << "Copy Construtor called for Data" << std::endl;
}

Data::Data(const std::string &name, int size, float ratio)  
 :m_name(name), m_size(size), m_ratio(ratio)
{
	std::cout << "Default Construtor called for Data" << std::endl;

}

Data::~Data()
{
	std::cout << "Destructor called for Data" << std::endl;

}


  
Data& Data::operator=(const Data& data) 
{
	std::cout << "Assignation operator called for Data" << std::endl;
	if (this != &data) // evita auto-atribuição
	{ 
		
		m_name = data.m_name;
		m_size = data.m_size;
		m_ratio = data.m_ratio;
	}
	return *this;
}


std::string& Data::getName()
{
	return m_name;
}


int Data::getSize()
{
	return m_size;
}

float Data::getRatio()
{
	return m_ratio;
}

std::ostream &operator<<( std::ostream & ost, Data &data)
{
  ost << "Data [name=" << data.getName() << ", size=" << data.getSize() << std::fixed <<", ratio=" << data.getRatio() << "]";

//        ost << "NAME ("<< m_name << "), SIZE(" << m_size << "), " << std::fixed<< " RATIO("<< ratio<<")" << std::endl;
return ost;
}    
  


