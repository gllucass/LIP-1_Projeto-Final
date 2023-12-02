#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

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

int main() {
    // Inicialização da janela
    sf::RenderWindow app(sf::VideoMode(800, 600), "MFJ - Hello World");
    int xCircle = 300;
    int yCircle = 300;

    // Loop principal
    while (app.isOpen()) {
        // Processa eventos
        sf::Event event;
        while (app.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                app.close();
            }
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
            return EXIT_SUCCESS;
        }

        // Simula o mundo do jogo
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) yCircle--;
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) yCircle++;
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) xCircle--;
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) xCircle++;

        // Renderiza
        app.clear(sf::Color(255, 255, 255));

        sf::VertexArray line(sf::Lines, 2);
        line[0].position = sf::Vector2f(10, 10);
        line[1].position = sf::Vector2f(100, 50);
        line[0].color = sf::Color(0, 0, 0);
        line[1].color = sf::Color(255, 255, 0);

        sf::CircleShape circle(50);
        circle.setPosition(xCircle, yCircle);
        circle.setFillColor(sf::Color(125, 200, 240));
        circle.setOutlineThickness(1);
        circle.setOutlineColor(sf::Color(0, 0, 0));

        sf::RectangleShape rect(sf::Vector2f(20, 30));
        rect.setPosition(400, 400);
        rect.setFillColor(sf::Color(35, 200, 100));
        rect.setOutlineThickness(1);
        rect.setOutlineColor(sf::Color(0, 0, 0));

        sf::ConvexShape polygon;
        polygon.setPointCount(3);
        polygon.setPoint(0, sf::Vector2f(100, 100));
        polygon.setPoint(1, sf::Vector2f(150, 200));
        polygon.setPoint(2, sf::Vector2f(80, 150));
        polygon.setFillColor(sf::Color(255, 0, 0));
        polygon.setOutlineThickness(1);
        polygon.setOutlineColor(sf::Color(0, 128, 128));

        app.draw(line);
        app.draw(circle);
        app.draw(rect);
        app.draw(polygon);
        app.display();
    }

    return EXIT_SUCCESS;
}