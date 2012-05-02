#include <iostream>
using namespace std;
#include "weapon.cpp"
#include "creature.cpp"
#include "monster.cpp"


int main () {
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
  
  return 0;
}

