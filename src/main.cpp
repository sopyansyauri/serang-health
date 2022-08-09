#include <iostream>
#include "player.h"

using std::cout;
using std::endl;


int main() {
    Player player1 = Player("Rifa'i Sopyan", 100, 5);
    Player player2 = Player("Cucu", 100, 10);
    player2.display();
    cout << endl;
    player1.atack(player2);
    player1.atack(player2);
    player1.atack(player2);
    player2.display();

    return 0;
}