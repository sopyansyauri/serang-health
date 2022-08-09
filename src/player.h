#ifndef __PLAYER
#define __PLAYER

#include <string>
#include <iostream>

class Player{
  private:
    std::string name;
    int health;
    int power;

  public:
    Player(const char*, int, int);
    void display();
    void atack(Player&);

    
};




#endif