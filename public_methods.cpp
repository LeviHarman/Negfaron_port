int die (int a_die)
{
  int roll = rand() % a_die + 1;
  return ( roll );
}

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

int new_stat_roll ()
{
  int statroll [4] = {die(6), die(6), die(6), die(6)};
  int statrolls = statroll[0]+statroll[1]+statroll[2]+statroll[3]-array_min(4, statroll);
  return ( statrolls );
}

int hero_stats(int hero){
  cout << "Name: = " ;//<< hero.name;
  cout << "Race: = " ;//<< hero.creature_type;
  cout << "Strength: = " ;//<< hero.str;
  cout << "Dexterity: = " ;//<< hero.dex;
  cout << "Constitution: = " ;//<< hero.con;
  cout << "Intelligence: = " ;//<< hero.inte;
  cout << "Wisdom: = " ;//<< hero.wis;
  cout << "Charisma: = " ;//<< hero.cha;
  cout << "Hitpoints: = " ;//<< hero.hp;
  cout << "Gold: = " ;//<< hero.gold;
  cout << "Weapon: = " ;//<< hero.weapon.name;
  cout << "Total Xp: = " ;//<< hero.experience;
  cout << "XP this lvl: = " ;//<< hero.exp_this_level;
  cout << "XP to next lvl: = " ;//<< hero.exp_to_next_level;
  
  return 0;
}