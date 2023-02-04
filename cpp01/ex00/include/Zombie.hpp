#include <string>

class Zombie
{
public:


	Zombie(std::string name);
	~Zombie(void);
	void announce( void ) const;
private:

	std::string m_name;
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);