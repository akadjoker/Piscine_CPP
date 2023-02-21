/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:54:52 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/21 15:51:31 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <stdint.h>

class Data 
{

   public:

        Data();
        ~Data();
        Data(const std::string &name, int size, float ratio);
        Data(Data &data);
        Data& operator=(const Data &data);

       
        std::string&    getName(void);
        int             getSize();
        float           getRatio();   
        
        
    private:
        std::string m_name;
        int         m_size;
        float       m_ratio;
};

std::ostream &operator<<( std::ostream &ost, Data &data);

#endif