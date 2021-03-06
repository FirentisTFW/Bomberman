#include "includes/bonus.h"

Bonus::Bonus(int _posX, int _posY, char _type) {
  
    type = _type;
    posX = _posX;
    posY = _posY;
    animationCounter = 0;
    animationDirectionUp = true;

    rect.setSize(sf::Vector2f(50, 50));
    rect.setPosition(posX * 50, posY * 50);
    rect.setFillColor(sf::Color::White);
}

Bonus::~Bonus() {}

bool Bonus::shouldBonusBeCreated() {
    int randomNumber = rand() % 10 + 1;
    return randomNumber < 6; 
}

char Bonus::whichBonusShouldBeCreated() {
    char type = '0';                                              // '0' means no bonus will be created

    int randomNumber = rand() % 110 + 1;                          // 1 - 120

    if(randomNumber < 21) type = 'r';                             // 20 chance for increased range
    else if(randomNumber < 41 && randomNumber > 20) type = 'b';   // 20 chance for additional bomb
    else if(randomNumber < 56 && randomNumber > 40) type = 's';   // 15 chance for increased speed
    else if(randomNumber < 66 && randomNumber > 55) type = 'h';   // 10 chance for shield
    else if(randomNumber < 76 && randomNumber > 65) type = 'p';   // 10 chance for bomb pushing skill
    else if(randomNumber < 81 && randomNumber > 75) type = 'l';   // 5 chance for additional live
    else if(randomNumber < 91 && randomNumber > 80) type = 'f';   // 10 chance for special weapon: fire
    else if(randomNumber < 101 && randomNumber > 90) type = 'i';   // 10 chance for special weapon: ice
    else type = 'd';   // 10 chance for special weapon: digged bombs

    // std::cout << randomNumber << " " << type << std::endl;

    // type = 'f';                                             // TEST

    return type;
}

int Bonus::getTextureId() {
    switch (type) {
        case 'f':
            return 0;
        case 'i':
            return 1;
        case 'r':
            return 2;
        case 'b':
            return 3;
        case 'h':
            return 4;
        case 'l':
            return 5;
        case 'p':
            return 6;
        case 's':
            return 7;
        case 'd':
            return 8;
        default:
            return 0;
    }
}