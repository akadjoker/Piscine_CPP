/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 14:49:31 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/05 15:21:17 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point
{
    private:
        const Fixed m_x;
        const Fixed m_y;  
    public:
        Point();
        Point(const float x, const float y);
        Point(const Point  &p);
        void operator=(Point const &f);
        ~Point();
        
        void setX(float x) ;
        void setY(float y) ;
        float getX(void) const;
        float getY(void) const;

        static bool bsp( const Point a, const Point  b, const Point c, const Point point);
};


