#include "Person.h"

class Player:public Movable{
  public:
    // Constructor and destructor
    Player(int x_pos, int y_pos, DIRECTIONS direction, COLLISIONS collision, int speed, int health, int strength, int armor);
    ~Player(void);
  
  vurtual draw(); // We'll deal with this later too...
}
