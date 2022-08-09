#include "player.h"

Player::Player(const char* Nama, int Health, int Power) {
  this->name = Nama;
  this->health = Health;
  this->power = Power;
}

void Player::display() {
  std::cout << "Nama: " << this->name << std::endl;
  std::cout << "Health: " << this->health << std::endl;
  std::cout << "Power: " << this->power << std::endl;
}

void Player::atack(Player& objek) {
  objek.health -= Player::power;

}