#include "ViewFrustum.h"



ViewFrustum::ViewFrustum()
{
}


ViewFrustum::~ViewFrustum()
{
}

void ViewFrustum::culling(Camera* camera){
	std::cout<<ResourceManager::useResources()->getList().size()<<std::endl;
	for(int i = 0; i < ResourceManager::useResources()->getList().size(); i++){
		if(ResourceManager::useResources()->getList().at(i)->getWorldLocationX() >= camera->getCameraX() && ResourceManager::useResources()->getList().at(i)->getWorldLocationX() <= (camera->getCameraX() + 800)){
			std::cout<<"object x within camera";
			if(ResourceManager::useResources()->getList().at(i)->getWorldLocationY() >= camera->getCameraY() && ResourceManager::useResources()->getList().at(i)->getWorldLocationY() <= (camera->getCameraY() + 600)){
				std::cout<<"object y within camera";
			}
		}
	}
}