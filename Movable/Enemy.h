#include "Person.h"

class Enemy:public Movable{
  public:
    // Constructor and destructor
    Enemy(int x_pos, int y_pos, DIRECTIONS direction, COLLISIONS collision, int speed, int health, int strength, int armor);
    ~Enemy(void);
  
  vurtual draw(); // We'll deal with this later too...
}
