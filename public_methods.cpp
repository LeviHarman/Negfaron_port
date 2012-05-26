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

Hero new_hero_stats(Hero hero){
  int r1 = new_stat_roll();
  int r2 = new_stat_roll();
  int r3 = new_stat_roll();
  int r4 = new_stat_roll();
  int r5 = new_stat_roll();
  int r6 = new_stat_roll();
  
  hero.set_str(r1);
  hero.set_dex(r2);
  hero.set_con(r3);
  hero.set_inte(r4);
  hero.set_wis(r5);
  hero.set_cha(r6);
  
  return(hero);
}

//supposed to write hero stats to the console.
int hero_stats(Hero hero){
 // cout << "Name: = "<<hero.name;
//  cout << "Race: = "<<hero.creature_type;
  cout << "Strength: = "<<hero.get_str()<<endl;
  cout << "Dexterity: = "<<hero.get_dex()<<endl;
  cout << "Constitution: = "<<hero.get_con()<<endl;
  cout << "Intelligence: = "<<hero.get_inte()<<endl;
  cout << "Wisdom: = "<<hero.get_wis()<<endl;
  cout << "Charisma: = "<<hero.get_cha()<<endl;
 // cout << "Hitpoints: = "<<hero.hp;
 // cout << "Gold: = "<<hero.gold;
// cout << "Weapon: = "<<hero.weapon.name;
//  cout << "Total Xp: = "<<hero.experience;
//  cout << "XP this lvl: = "<<hero.exp_this_level;
//  cout << "XP to next lvl: = "<<hero.exp_to_next_level;
  
  return 0;
}