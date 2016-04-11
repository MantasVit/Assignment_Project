#pragma once
#include "GameObject.h"
class BaseItem:public GameObject
{
protected:
	int		price;
public:
	BaseItem();
	BaseItem(int Price);
	BaseItem(int Weight);
	BaseItem(string Description);
};

/* 
Descriptions
Weight
Price
*/

		
//Books
