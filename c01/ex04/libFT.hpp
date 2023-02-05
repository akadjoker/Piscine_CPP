/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libFT.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 08:27:11 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/05 09:28:51 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <sstream>
#include <string>
#include <iostream>
#include <fstream>

namespace FT
{

//https://tylerayoung.com/2014/05/02/stupid-type-conversions-in-c98/
//https://doc.zeroc.com/ice/3.7/language-mappings/c++98-mapping

template<typename T>
inline std::string to_string(const T & value) 
{
    std::ostringstream oss;
    oss << value;
    return oss.str();
}

inline int stoi( std::string & s ) 
{
    int i;
    std::istringstream(s) >> i;
    return i;
}


std::string converting(std::string line, std::string one, std::string two)
{
    std::size_t found = line.find(one);
    while (found != std::string::npos)
    {
        line.erase(found, one.length());
        line.insert(found, two, 0, two.length());
        found = line.find(one);
    }
    return line;
}

inline std::string    replace(const std::string &text, const std::string &s1, const std::string &s2)
{
    int         pos = 0;
    int         save_pos = 0;
    int         count = 0;
    std::string new_str;

    
    while ((pos = text.find(s1, save_pos)) >= 0)
    {
        new_str.append(text.substr(save_pos, pos - save_pos));
        new_str.append(s2);
        save_pos = pos + s1.length();
        count++;
    }
    new_str.append(text.substr(save_pos, pos - save_pos));
    return new_str;
}

inline bool is_empty(std::fstream& pFile)
{
    return pFile.peek() == std::ifstream::traits_type::eof();
}


inline int    replace(std::fstream &file, std::fstream &new_file, const std::string &s1, const std::string &s2)
{
    int pos = 0;
    int save_pos = 0;
    int count = 0;
    std::string new_str;
    std::string test;
    
    while (std::getline(file, test))
    {
        while ((pos = test.find(s1, save_pos)) >= 0)
        {
            new_str.append(test.substr(save_pos, pos - save_pos));
            new_str.append(s2);
            save_pos = pos + s1.length();
            count++;
        }
        new_str.append(test.substr(save_pos, pos - save_pos));
        //is text? replace else past original
        if (new_str.empty())
                new_file << test;
        else
            new_file << new_str;
        save_pos = 0;
        pos = 0;
        // next case
        new_str.erase();
        if (!file.eof())
            new_file << std::endl;
    }
    return count;
}

} // namespace FT
