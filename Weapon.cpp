class Weapon {
  string name;
  int hitdie;
  int number_rolls;
  int price;
  int modifier;
  public:
  void set_values (string new_name, int new_hitdie, int new_number_rolls, int new_price, int new_modifier);
    string get_name(){ return name; }
    int get_hitdie(){ return hitdie; }
    int get_number_rolls(){ return number_rolls; }
    int get_price(){ return price; }
    int get_modifier(){ return modifier; }
  
  
};

void Weapon::set_values (string new_name, int new_hitdie, int new_number_rolls, int new_price, int new_modifier) {
  name = new_name;
  hitdie = new_hitdie;
  number_rolls = new_number_rolls;
  price = new_price;
  modifier = new_modifier;
}
