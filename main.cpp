#include <iostream>
#include <time.h>
#include <string>
using namespace std;
#include "weapon.cpp"
#include "creature.cpp"
#include "monster.cpp"
#include "hero.cpp"
#include "neg_functions.cpp"
#include "char_gen.cpp"
//Programmed by: Levi Harman
//Last revision: 5/26/2012


int main () {

  srand ( time(NULL) );
  
  cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
  cout << "Welcome to....                                           @\n";
  cout << "                                                         @\n";
  cout << "#     #                                                  @\n";
  cout << "##    # ######  ####  ######   ##   #####   ####  #    # @\n";
  cout << "# #   # #      #    # #       #  #  #    # #    # ##   # @\n";
  cout << "#  #  # #####  #      #####  #    # #    # #    # # #  # @\n";
  cout << "#   # # #      #  ### #      ###### #####  #    # #  # # @\n";
  cout << "#    ## #      #    # #      #    # #   #  #    # #   ## @\n";
  cout << "#     # ######  ####  #      #    # #    #  ####  #    # @\n";
  cout << "                                                         @\n";
  cout << "                                                         @\n";
  cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
  
  Weapon wep;
  wep.set_values ("sword", 4, 1, 35, 0);
  
  Hero hero;
  hero.set_values ("hero", "human", 0, 0);
  hero.set_stats (1, 1, 1, 1, 1, 1);
  hero.set_specific_values (1, wep, 1, 1, 1, 1);
  
  hero = prompt_name(hero);
  
  
  hero = new_hero_stats(hero);
  hero_stats(hero);
  
  return 0;
}

