// Initialize object stats
enum DIRECTIONS(none = 0, left, down, up, right);
enum COLLISIONS(no = 0, enemy, loot, wall);
int x_pos, y_pos;
int speed = 0;

int room_width = 16;
int room_height = 16:

// Set chars
char wall = "#";
char enemy = "*";
char loot = "@";

// Setters and Getters
void public get_health;
void public get_strength;
void public get_armor;

struct location{
  int x;
  int y;
  location(int x, int y,)(this->x=x; this->y=y;);
};
