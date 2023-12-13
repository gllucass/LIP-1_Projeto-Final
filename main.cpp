#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>

int newPlayer(){
    int players;
    std::cout << "Quantos jogares participarão da partida?" << "\n";
    std::cout << "[1] - Um jogador" << "\n" << "[2] - Dois jogadores" << "\n";
    std::cin >> players;
    if(players > 2 or players < 1) newPlayer();
    return players;
}

void telaInicial(){
    
}

#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML App");
    sf::CircleShape shape(50.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}