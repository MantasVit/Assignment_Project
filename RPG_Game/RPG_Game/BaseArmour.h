#pragma once
#include"BaseItem.h"
class BaseArmour:public BaseItem
{
public:
	BaseArmour(int Defence);
	~BaseArmour();
};


//List of properties needed
//Defence
//Price 
//Weight

//List of armour types
//helmet
//torso
//shield
//legs


//All item classes created by Simon

class helmet

{
public:
	int defence;
	int price;
	int weight;
};

class torso

{
public:
	int defence;
	int price;
	int weight;
};

class shield

{
public:
	int defence;
	int price;
	int weight;
};

class legs

{
public:
	int defence;
	int price;
	int weight;
};


