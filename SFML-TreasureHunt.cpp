#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");

    /*sf::RectangleShape cell(sf::Vector2f(200.f, 200.f));
    propriétés carrés
    shape.setPosition(0, 0);
    shape.setOutlineThickness(5.f);
    shape.setFillColor(sf::Color::White);
    shape.setOutlineColor(sf::Color::Cyan);*/

    const int rows = 8;
    const int cols = 10;
    const float cellSize = 50.f;

    int map[rows][cols] = 
    {
        {0, 0, 0, 1, 0, 0 ,0 ,0 ,0 ,0},
        {0, 1, 0, 1, 0, 1, 1, 1, 0, 0},
        {0, 1, 0, 0, 0, 0, 0, 1, 0, 0},
        {0, 0, 1, 1, 1, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 1, 0, 0, 0, 0, 2},
        {0, 1, 1, 0, 0, 0, 1, 1, 0, 0},
        {0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
        {1, 1, 0, 0, 1, 0, 0, 1, 0, 0}
    };

    std::vector<sf::RectangleShape> grid;

    for (int row = 0; row < rows; ++row)
    {
        for (int col = 0; col < cols; ++col)
        {
            sf::RectangleShape cell(sf::Vector2f(cellSize, cellSize));
            cell.setPosition(col * cellSize, row * cellSize);

            if (map[row][col] == 0)
            {
                cell.setFillColor(sf::Color::Green); // the path
                cell.setOutlineColor(sf::Color::Black);
                cell.setOutlineThickness(2.f);
            }
            else if(map[row][col] == 1)
            {
                cell.setFillColor(sf::Color::Red); // for ChatGPT obstacles, idk if keep
                cell.setOutlineColor(sf::Color::Black);
                cell.setOutlineThickness(2.f);
            }
            else if (map[row][col] == 2) 
            {
                cell.setFillColor(sf::Color::Yellow); // the treasure, still need to rand it, and hide it for player
                cell.setOutlineColor(sf::Color::Black);
                cell.setOutlineThickness(2.f);
            }

            grid.push_back(cell);
        }
    }

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::Black);

        for (auto& cell : grid)
        {
            window.draw(cell);
        }
        window.display();

        /*if (event.type == sf::Event::MouseButtonReleased)

            if (sf::Mouse::Left == 2)
            {
                (event.mouseButton.x, event.mouseButton.y);
                std::cout << "you won :3 " << '\n';
            }
            else
            {
               std::cout << "you lost :( " << '\n';
            }*/

    }

    return 0;
}