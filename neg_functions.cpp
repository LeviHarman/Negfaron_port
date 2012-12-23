//function used to roll die needs parameter for die sides.
int die (int a_die)
{
  int roll = rand() % a_die + 1;
  return ( roll );
}

//finds the smallest element in an array.
//needs length of array, and the actual array.
int array_min (int elements, int array[]) {
  int counter;
  int min = array[0];
  
  for (counter = 0; counter < elements; counter++) {
    if (array[counter] < min) {
      min = array[counter];
    }
  }
  return ( min );
}

//uses array_min method.
//rolls 4 d6 and then subtracts smallest roll.
int new_stat_roll()
{
  int statroll [4] = {die(6), die(6), die(6), die(6)};
  int statrolls = statroll[0]+statroll[1]+statroll[2]+statroll[3]-array_min(4, statroll);
  return ( statrolls );
}

//prints name,race,str,dex,con,inte,wis,cha,hp,max_hp,gold,weapon,experience,exp_this_level,exp_to_next_level
void hero_stats(Hero hero){
	cout << "Name: = " << hero.name<< endl;
	cout << "Race: = "<<hero.type<<endl;
	cout << "Strength: = "<<hero.str<<endl;
	cout << "Dexterity: = "<<hero.dex<<endl;
	cout << "Constitution: = "<<hero.con<<endl;
	cout << "Intelligence: = "<<hero.inte<<endl;
	cout << "Wisdom: = "<<hero.wis<<endl;
	cout << "Charisma: = "<<hero.cha<<endl;
	cout << "Hitpoints: = "<<hero.hp<<endl;
	cout << "Total HP: = "<<hero.max_hp<<endl;
	cout << "Gold: = "<<hero.gold<<endl;
	cout << "Weapon: = "<<hero.weapon.name<<endl;
	cout << "Total Xp: = "<<hero.experience<<endl;
	cout << "XP this lvl: = "<<hero.exp_this_level<<endl;
	cout << "XP to next lvl: = "<<hero.exp_to_next_level<<endl;
}

//parameter:stat
//return:stats modifier
int get_mod(int stat){
  int mod = (stat/2)-5;
  return(mod);
}

