// This file is for functions related to character generation.

// Function: prompt_name()
// Description: Prompts user for desired name. Changed heros name to desired name.
// Parameter: hero
Hero prompt_name(Hero hero){
  bool name_check = true;

  while(name_check==true){
    string name;
    char q;
    
    cout<<"What is thy name?";
    cin>>name;
    cout<<"is "<<name<<" correct? 'y/n'";
    cin>>q;
    
    if(q=='y'){
      hero.name = name;
      cout<<"Welcome "<<hero.name<<", to the land of Negfaron!";
      name_check=false;
    }
  }
  return(hero);
}

//generates new str,dex,con,inte,wis,cha, and hp.
//prompts user if he wants to roll again.
Hero new_hero_stats(Hero hero){
  bool stat_check = true;
  char q;
  int r1,r2,r3,r4,r5,r6,m1,m2,m3,m4,m5,m6;
  
  while(stat_check==true){
    r1 = new_stat_roll();
    r2 = new_stat_roll();
    r3 = new_stat_roll();
    r4 = new_stat_roll();
    r5 = new_stat_roll();
    r6 = new_stat_roll();
    
    m1 = get_mod(r1);
    m2 = get_mod(r2);
    m3 = get_mod(r3);
    m4 = get_mod(r4);
    m5 = get_mod(r5);
    m6 = get_mod(r6);
    
    cout<<"Your stats are:"<<endl;
    cout<<"Strength:     "<<r1<<", modifier: "<<m1<<" - Physical damage, and melee accuracy."<<endl;
    cout<<"Dexterity:    "<<r2<<", modifier: "<<m2<<" - Ranged accuracy, and armor class."<<endl;
    cout<<"Constitution: "<<r3<<", modifier: "<<m3<<" - Hit points, and poison saves."<<endl;
    cout<<"Intelligence: "<<r4<<", modifier: "<<m4<<" - Magic."<<endl;
    cout<<"Wisdom:       "<<r5<<", modifier: "<<m5<<" - Healing."<<endl;
    cout<<"Charisma:     "<<r6<<", modifier: "<<m6<<" - Prices and dealing with people."<<endl;
    cout<<"Hitpoints:    "<<(10+m3)<<"              - How much damage you can take."<<endl;
    cout<<endl;
    
    cout<<"Do you want to roll again? 'y/n'";
    cin>>q;
    
    if(q=='n')
    {
      stat_check = false;
    }
  }
  
  hero.str = r1;
  hero.dex = r2;
  hero.con = r3;
  hero.inte = r4;
  hero.wis = r5;
  hero.cha = r6;
  
  hero.str_mod = m1;
  hero.dex_mod = m2;
  hero.con_mod = m3;
  hero.inte_mod = m4;
  hero.wis_mod = m5;
  hero.cha_mod = m6;
  
  hero.max_hp = 10+m3;
  hero.hp = 10+m3;
  
  return(hero);
}

Hero pick_race(Hero hero)
{
  bool race_check = true;
  
  while(race_check==true)
  {
    cout<<"Pick a race."<<endl;
    cout<<"Human - +0    , +0     The well rounded race."<<endl;
    cout<<"Dwarf - +2 Con, -2 Cha A short and sturdy race."<<endl;
    cout<<"Elf   - +2 Dex, -2 Con A frail race. "<<endl;
    
    string race;
    cin>>race;
    
    if (race=="Human"){
    
      hero.type="Human";
      race_check=false;
    }
    else if(race=="Dwarf"){
      hero.type = "Dwarf";
      hero.con+=2;  
      hero.cha-=2;
      race_check=false;
    }
    else if(race=="Elf"){
      hero.type="Elf";
      hero.con-=2;
      hero.dex-=2;
      race_check=false;
    }
    else if(race_check==true)
    {
      cout<<"Please enter a valid race. Make sure you capitalize the race name ex: Human not human"<<endl;
    }
  }
  return(hero);
}

