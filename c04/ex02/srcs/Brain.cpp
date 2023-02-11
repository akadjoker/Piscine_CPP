/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 08:30:21 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/11 08:32:02 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


Brain::Brain() {
    std::cout << "Default constructor called for Brain" << std::endl;
    this->ideas[0] = get_my_idea();
}


Brain &Brain::operator=(const Brain &rhs) {
    if (this == &rhs)
        return (*this);
    for (int i = 0; i < 100; i++)
      this->ideas[i] = rhs.ideas[i];
    return (*this);
}

Brain::~Brain() {
    std::cout << "Destructor called for Brain" << std::endl;
}

std::string Brain::get_my_idea(void)
{
  static int value = 0;
  if (value++ %2)
    return (std::string("I love everyone"));
  else
    return (std::string("I will kill my human one day"));
}