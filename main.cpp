#include <iostream>
using namespace std;

class Player
{
  public:
    int points;
    Player(int x)
    {
        points = x;
        points %= 5; //possible values seem to be only 0-4
    }
    ~Player(){
      cout << points;
    }
    
};
int main() {
  int points;
  cin >> points;
  Player obj(points);
}
