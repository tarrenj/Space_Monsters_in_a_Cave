class Movable{
  // Initialize player stats
  private:
    int health = 1, strength = 1, armor = 0;
  
  public:
    void save();
    void load();
    movable();
    ~movable();
    
    void set_health(int h);
    void set_strength(int s);
    void set_armor(int a);
};

movable::movable(){
  health = 1;
  strength = 1;
  armor = 0;
}

movable::~movable(){

}

// Setters
void movable::set_health(int h){
  health = h;
}

void movable::set_strength(int s){
  strength = s
}

void movable::set_armor(int a){
  armor = a
}
