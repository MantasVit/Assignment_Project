#include "BaseWeapon.h"



//BaseWeapon::BaseWeapon()
//{
//}

// All items created by Simon
BaseWeapon::~BaseWeapon()
{
	//Swords
	sword bronzesword;
	bronzesword.damage = 10;
	bronzesword.price = 3;
	bronzesword.weight = 2;

	sword ironsword;
	ironsword.damage = 15;
	ironsword.price = 20;
	ironsword.weight = 5;

	sword steelsword;
	steelsword.damage = 20;
	steelsword.price = 40;
	steelsword.weight = 6;

	sword goldsword;
	goldsword.damage = 25;
	goldsword.price = 60;
	goldsword.weight = 7;

	sword diamondsword;
	diamondsword.damage = 40;
	diamondsword.price = 100;
	diamondsword.weight = 10;


	//Axes
	axe woodaxe;
	woodaxe.damage = 8;
	woodaxe.price = 2;
	woodaxe.weight = 2;

	axe ironaxe;
	ironaxe.damage = 16;
	ironaxe.price = 23;
	ironaxe.weight = 6;

	axe silveraxe;
	silveraxe.damage = 25;
	silveraxe.price = 55;
	silveraxe.weight = 8;

	axe dragonscaleaxe;
	dragonscaleaxe.damage = 45;
	dragonscaleaxe.price = 110;
	dragonscaleaxe.weight = 12;




	//Crossbows
	crossbow woodencrossbow;
	woodencrossbow.damage = 10;
	woodencrossbow.price = 4;
	woodencrossbow.weight = 3;

	crossbow steelcrossbow;
	steelcrossbow.damage = 20;
	steelcrossbow.price = 40;
	steelcrossbow.weight = 6;

	crossbow ivorycrossbow;
	ivorycrossbow.damage = 45;
	ivorycrossbow.price = 120;
	ivorycrossbow.weight = 8;



	//Spears
	spear woodenspear;
	woodenspear.damage = 10;
	woodenspear.price = 3;
	woodenspear.weight = 4;

	spear ironspear;
	ironspear.damage = 17;
	ironspear.price = 25;
	ironspear.weight = 5;

	spear goldspear;
	goldspear.damage = 30;
	goldspear.price = 60;
	goldspear.weight = 6;

	spear dragonbonespear;
	dragonbonespear.damage = 35;
	dragonbonespear.price = 90;
	dragonbonespear.weight = 9;
}
