/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:49:57 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/21 12:49:59 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <cstdlib>

class Base 
{

    public:
        virtual ~Base() {};
    private:

};

class A : public Base
{

};


class B : public Base
{

};


class C : public Base
{

};

Base* generate(void);
void identify(Base* p);
void identify(Base& p);

#endif
