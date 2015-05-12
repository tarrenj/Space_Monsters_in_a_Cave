#include "constants.h"

class Movable{
  // General methods
  public:
    Movable(location myLoc, DERECTION dir, COLLISION col);
    ~Movalbe(void);
  void public update();
  void public setCollision(COLLISION col){this->col = col;};
  void public setLocation(location myLoc){this->myLoc = myLoc;};
};
