#include "constants.h"

class Movable{
  // General methods
  public:
    Movable(location myLoc, DERECTION dir, COLLISION col);
    ~Movalbe(void);
  void public update();
  inline public getX(myLoc){return myLoc.x;};
  inline public getY(myLoc){return myLoc.y;};
  inline public setCollision(COLLISION col){this->col = col;};
  inline public setLocation(location myLoc){this->myLoc = myLoc;};
};
