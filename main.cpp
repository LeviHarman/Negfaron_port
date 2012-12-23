#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string>
using namespace std;
#include "weapon.cpp"
#include "creature.cpp"
#include "neg_functions.cpp"
#include "char_gen.cpp" 

//Programmed by: Levi Harman
//Last revision: 5/26/2012

int main() 
{
	Weapon wep;
	wep.name = "fist";
	wep.hit_die = 4;
	wep.number_rolls = 1;
	wep.price = 0;
	wep.modifier = 0;
	Hero hero;
	
	hero.weapon = wep;
	hero.level=1;
	hero.gold=0;
	hero.experience=0;
	hero.exp_this_level=0;
	hero.exp_to_next_level=1000;

	hero = prompt_name(hero);
	hero = new_hero_stats(hero);
	hero = pick_race(hero);
	hero_stats(hero);

	return 0;
}