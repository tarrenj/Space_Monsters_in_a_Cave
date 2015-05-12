#include "Movable.h"

class Person:public Movable{

  public:
    // Construcor and destructor
    Person(int x_pos, int y_pos, DIRECTIONS direction, COLLISIONS collision, int speed, int health, int strength, int armor);
    ~Person(void);
    
    virtual draw(); // We'll deal with this later...
};
