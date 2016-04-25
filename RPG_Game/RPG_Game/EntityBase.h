#pragma once

#include "ResourceManager.h"

class EntityBase{
protected:
public:
	EntityBase();
	~EntityBase();
	void addToList(EntityBase* entity);
};

