/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 14:50:02 by lrosa-do          #+#    #+#             */
/*   Updated: 2023/02/13 19:27:01 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : m_x(0), m_y(0)
{
}

Point::Point(const float x, const float y) : m_x(x) , m_y(y)
{
}

Point::Point(Point const  &p) : m_x(p.m_x) , m_y(p.m_y)
{
}

/*
Keep in mind that m_x and m_y are constants, so i cannot change their values ​​once they are initialized.
*/
void Point::operator = (const Point &f)
{
    (void)f;
}

Point::~Point()
{
}

float Point::getX(void) const
{
    return m_x.toFloat();
}

float Point::getY(void) const
{
    return m_y.toFloat();
}



/*
 Compute the area of the triangle using Shoelace formula
 https://www.baeldung.com/cs/check-if-point-is-in-2d-triangle

*/
static float sign_area(const Point a, const Point b, const Point c)
{
    float result = 0.5 * ((a.getX() * (b.getY() - c.getY())) + (b.getX() * (c.getY() - a.getY())) + (c.getX() * (a.getY() - b.getY())));

    /*
    for this example we don't need to worry about the orientation of the triangle ;) 
    swap if is negative value
    */
    if (result < 0)
        result *= -1;
    return result;
}

bool bsp( const Point a, const Point  b, const Point c, const Point point)
{
   
  // Compute the areas of three smaller triangles formed by point and two sides of the triangle
    float A  = sign_area(a,b,c);
    float a1 = sign_area(a,b,point);
    float a2 = sign_area(a,c,point);
    float a3 = sign_area(b,c,point);

    #if DEBUG
     std:: cout << A << std::endl;
     std:: cout << a1 << std::endl;
     std:: cout << a2<< std::endl;
     std:: cout << a3 << std::endl;
    #endif

    if (!a1 || !a2 || !a3 || !A)
        return (false);

    // If the sum of the three smaller triangles' areas is equal to the original triangle's area,
    // the point is inside the triangle
    if (A == a1 + a2 + a3)
        return (true);
    return (false);        
}


