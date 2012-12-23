class Creature {
  public: 
	string name;
	string type;
	int hp;
	int max_hp;
  
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

class Hero: public Creature {
  public:
		int level;
		int mod;
		Weapon weapon;
		int gold;
		int experience;
		int exp_this_level;
		int exp_to_next_level;
		int str,dex,con,inte,wis,cha;
		int str_mod,dex_mod,con_mod,inte_mod,wis_mod,cha_mod;
};

class Monster: public Creature {
	public:
		int damage_die;
		int xpv;
		int goldv;
};

