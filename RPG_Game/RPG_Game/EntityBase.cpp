#include "EntityBase.h"

EntityBase::EntityBase(){
}

EntityBase::~EntityBase(){
}

void EntityBase::addToList(EntityBase* entity){
	ResourceManager::useResources()->addItem(entity);
}