class Weapon {
  string name;
  int hit_die;
  int number_rolls;
  int price;
  int modifier;
  public:
    void set_values (string new_name, int new_hit_die, int new_number_rolls, int new_price, int new_modifier) {
      name = new_name;
      hit_die = new_hit_die;
      number_rolls = new_number_rolls;
      price = new_price;
      modifier = new_modifier;
    }    

  string get_name(){ return name; }
  int get_hit_die(){ return hit_die; }
  int get_number_rolls(){ return number_rolls; }
  int get_price(){ return price; }
  int get_modifier(){ return modifier; }
  
  void set_name(string a){ name = a; }
  void set_hit_die(int a){ hit_die = a; }
  void set_number_rolls(int a){ number_rolls = a; }
  void set_price(int a){ price = a; }
  void set_modifier(int a){ modifier = a; }
};

