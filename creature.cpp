class Creature {
  string name;
  string type;
  int hp;
  int max_hp;
  public:
    //set_values: name,type,hp,max_hp
    void set_values (string new_name, string new_type, int new_hp, int new_max_hp) {
      name = new_name;
      type = new_type;
      hp = new_hp;
      max_hp = new_max_hp;
    }
    
  string get_name(){ return name; }
  string get_type(){ return type; }
  int get_hp(){ return hp; }
  int get_max_hp(){ return max_hp; }
  
  void set_name(string a){ name = a; }
  void set_type(string a){ type = a; }
  void set_hp( int a ){ hp = a; }
  void set_max_hp( int a ){ max_hp = a; }
  
  bool is_alive() {
    if(hp > 0)
    {
      return true;
    }
    else if(hp<=0)
    {
      return false;
    }
  }
};
