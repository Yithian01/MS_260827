#include <iostream>

using namespace std;

class ACharacter
{
public:
	void Move() {};

	void Attack() {};
};

class APlayer : public ACharacter
{
};

class ASlime : public ACharacter
{
	
};

class AGoblin : public ACharacter
{

};

class ABore : public ACharacter
{

};

int main()
{
	return 0;
}