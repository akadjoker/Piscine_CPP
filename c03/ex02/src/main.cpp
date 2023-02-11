
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{
    FragTrap a("luis");
    FragTrap b("enemy");
    a.attack(b.getName());
    a.attack(b.getName());
    a.attack(b.getName());
    a.attack(b.getName());
    a.attack(b.getName());
    a.attack(b.getName());
    a.attack(b.getName());
    a.attack(b.getName());
    a.attack(b.getName());
    a.attack(b.getName());
    a.attack(b.getName());
    a.attack(b.getName());
    a.attack(b.getName());
    a.attack(b.getName());
    a.attack(b.getName());
    a.highFivesGuys();
    b.takeDamage(80);
    b.attack(a.getName());
    a.takeDamage(90);
    a.attack(b.getName());
    b.beRepaired(110);
    b.attack(a.getName());
    a.takeDamage(19);
    a.highFivesGuys();

    return (0);
}