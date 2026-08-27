#pragma once
#include "Actor.h"

class ACharacter : public AActor
{
public:
	ACharacter();

	void Move();

	void Attack();

	~ACharacter();
};

