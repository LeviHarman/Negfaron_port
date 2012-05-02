class Creature {
  string name;
  string creature_type;
  int hp;
  int max_hp;
  public:
    void Creature::set_values (string new_name, string new_creature_type, int new_hp, int new_max_hp) {
      name = new_name;
      creature_type = new_creature_type;
      hp = new_hp;
      max_hp = new_max_hp;
    }
    
  string get_name(){ return name; }
  string get_creature_type(){ return creature_type; }
  int get_hp(){ return hp; }
  int get_max_hp(){ return max_hp; }
  
  void set_name(string a){ name = a; }
  void set_creature_type(string a){ creature_type = a; }
  void set_hp( string a ){ hp = a; }
  void max_hp( string a ){ max_hp = a; }
  
  int alive?() {
    hp > 0;
  }
};
