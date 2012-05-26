class Hero: public Creature {
  //stats and mod values
  int str,dex,con,inte,wis,cha;
  int str_mod,dex_mod,con_mod,inte_mod,wis_mod,cha_mod;
  
  //specific values
  int level;
  Weapon weapon;
  int gold;
  int experience;
  int exp_this_level;
  int exp_to_next_level;
  
  
  
  public:
    //set_stats:str,dex,con,inte,wis,cha
    void Hero::set_stats (int new_str, int new_dex, int new_con, int new_inte, int new_wis, int new_cha) {
      str = new_str;
      dex = new_dex;
      con = new_con;
      inte = new_inte;
      wis = new_wis;
      cha = new_cha;
    }
    //set_specific_values:level,weapon,gold,experience,exp_this_level,exp_to_next_level
    void Hero::set_specific_values (int new_level, Weapon new_weapon, int new_gold, int new_experience, int new_exp_this_level, int new_exp_to_next_level) {
      level = new_level;
      weapon = new_weapon;
      gold = new_gold;
      experience = new_experience;
      exp_this_level = new_exp_this_level;
      exp_to_next_level = new_exp_to_next_level;
    }
    
  void set_str(int a){ str = a; }
  void set_dex(int a){ dex = a; }
  void set_con(int a){ con = a; }
  void set_inte(int a){ inte = a; }
  void set_wis(int a){ wis = a; }
  void set_cha(int a){ cha = a; }
  void set_str_mod(int a){ str_mod = a; }
  void set_dex_mod(int a){ dex_mod = a; }
  void set_con_mod(int a){ con_mod = a; }
  void set_inte_mod(int a){ inte_mod = a; }
  void set_wis_mod(int a){ wis_mod = a; }
  void set_cha_mod(int a){ cha_mod = a; }
  
  void set_level(int a){ level = a; }
  void set_weapon(Weapon a){ weapon = a; }
  void set_gold(int a){ gold = a; }
  void set_experience(int a){ experience = a; }
  void set_exp_this_level(int a){ exp_this_level = a; }
  void set_exp_to_next_level(int a){ exp_to_next_level = a; }
  
  int get_str(){ return(str); }
  int get_dex(){ return(dex); }
  int get_con(){ return(con); }
  int get_inte(){ return(inte); }
  int get_wis(){ return(wis); }
  int get_cha(){ return(cha); }
  int get_str_mod(){ return(str_mod); }
  int get_dex_mod(){ return(dex_mod); }
  int get_con_mod(){ return(con_mod); }
  int get_inte_mod(){ return(inte_mod); }
  int get_wis_mod(){ return(wis_mod); }
  int get_cha_mod(){ return(cha_mod); }
  
  int get_level(){ return(level); }
  Weapon get_weapon(){ return(weapon); }
  int get_gold(){ return(gold); }
  int get_experience(){ return(experience); }
  int get_exp_this_level(){ return(exp_this_level); }
  int get_exp_to_next_level(){ return(exp_to_next_level); }
};
