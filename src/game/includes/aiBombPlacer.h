#pragma once

#include "character.h"
#include "point.h"
#include "aiPositionChecker.h"

class AiBombPlacer : AiPositionChecker {
    private:
        Character *character;
        std::array<std::array<std::string, 16>, 16> gameBoard;
        std::vector<Bomb *> bombs;
        std::array<Point, 4> surroundingPositions;
        
    public:
        AiBombPlacer(Character* &_character, std::array<std::array<std::string, 16>, 16> &_gameBoard, std::vector<Bomb *> &_bombs);

        ~AiBombPlacer();

        bool isItWorthToPlaceBombHere();
};