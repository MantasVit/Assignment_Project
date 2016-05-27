#include "BaseArmour.h"



//BaseArmour::BaseArmour()
//{
//}

// All items created by Simon

BaseArmour::~BaseArmour()
{

	//Helmets
	helmet bronzehelmet;
	bronzehelmet.defence = 1;
	bronzehelmet.price = 3;
	bronzehelmet.weight = 2;

	helmet ironhelmet;
	ironhelmet.defence = 2;
	ironhelmet.price = 6;
	ironhelmet.weight = 6;

	helmet granitehelmet;
	granitehelmet.defence = 4;
	granitehelmet.price = 15;
	granitehelmet.weight = 10;


	//Torsos
	torso leathershirt;
	leathershirt.defence = 3;
	leathershirt.price = 2;
	leathershirt.weight = 2;

	torso chainmail;
	chainmail.defence = 8;
	chainmail.price = 6;
	chainmail.weight = 4;

	torso breastplate;
	breastplate.defence = 14;
	breastplate.price = 20;
	breastplate.weight = 12;




	//Shields
	shield woodenshield;
	woodenshield.defence = 2;
	woodenshield.price = 3;
	woodenshield.weight = 3;

	shield stoneshield;
	stoneshield.defence = 4;
	stoneshield.price = 5;
	stoneshield.weight = 5;

	shield spikedshield;
	spikedshield.defence = 10;
	spikedshield.price = 13;
	spikedshield.weight = 10;




	//Legs
	legs leathergreaves;
	leathergreaves.defence = 3;
	leathergreaves.price = 4;
	leathergreaves.weight = 2;

	legs steellegplates;
	steellegplates.defence = 6;
	steellegplates.price = 8;
	steellegplates.weight = 5;
}
