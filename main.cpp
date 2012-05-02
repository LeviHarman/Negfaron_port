#include <iostream>
#include <time.h>
using namespace std;
#include "weapon.cpp"
#include "creature.cpp"
#include "monster.cpp"
#include "hero.cpp"
#include "negfaron_methods.cpp"


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
  int apple = new_stat_roll ();
  int pir = new_stat_roll ();
  int cat = new_stat_roll ();
  int bandanna = new_stat_roll ();
  
  cout << apple << "\n";
  cout << pir << "\n";
  cout << cat << "\n";
  cout << bandanna << "\n";
  
  return 0;
}

