class Person{
  // Initialize player stats
  private:
    int health = 1, strength = 1, armor = 0;
  
  public:
    void save();
    void load();
    person();
    ~person();
    
    void set_health(int h);
    void set_strength(int s);
    void set_armor(int a);
};

person::person(){
  health = 1;
  strength = 1;
  armor = 0;
}

person::~person(){

}

// Setters
void person::set_health(int h){
  health = h;
}

void person::set_strength(int s){
  strength = s
}

void person::set_armor(int a){
  armor = a
}
