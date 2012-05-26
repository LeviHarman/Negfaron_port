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
      hero.set_name(name);
      cout<<"Welcome "<<name<<", to the land of Negfaron!";
      name_check=false;
    }
  }
  return(hero);
}