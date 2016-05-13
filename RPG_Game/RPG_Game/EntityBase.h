#pragma once

#include "ResourceManager.h"
#include "Object.h"

class Object;

class EntityBase: public Object{
protected:
public:
	EntityBase();
	~EntityBase();
	void addToList(EntityBase* entity);
	void update(){};
};

