#include <iostream>

int newPlayer(){
    int players;
    std::cout << "Quantos jogares participarão da partida?" << "\n";
    std::cout << "[1] - Um jogador" << "\n" << "[2] - Dois jogadores" << "\n";
    std::cin >> players;
    if(players > 2 or players < 1) newPlayer();
    return players;
}


int main() {
    newPlayer();
}