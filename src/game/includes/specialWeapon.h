#pragma once
#include "object.h"

class SpecialWeapon : public Object {
    public:
        char type;      // f - fire, i - ice
        int timeToDisappear;            // how many frames till the effects of the weapon disappear
        char color;                     // needed to increase the score - color identifies the character who used this weapon
        int animationCounter;           // for fire animation

        SpecialWeapon(int _posX, int _posY, char _type, char _color, sf::Texture &texture);

        ~SpecialWeapon();

        static bool canYouDigBombHere(const int posX, const int posY, const std::array<std::array<std::string, 16>, 16> &gameBoard);

        static bool canFireBeUsedHere(const int posX, const int posY, const std::array<std::array<std::string, 16>, 16> &gameBoard);

        static bool canIceBeUsedHere(const int posX, const int posY, const std::array<std::array<std::string, 16>, 16> &gameBoard);

        static int getXSummand(const char direction);

        static int getYSummand(const char direction);
};