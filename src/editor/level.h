#pragma once
#include "levelEditorUI.h"

class Level {

    public:
        sf::RenderWindow* window;

        std::array<std::array<std::string, 16>, 16> gameBoard;
        sf::Sprite background;
        int backgroundTextureId;
        std::string chosenAsset;
        sf::Texture chosenAssetTexture;
        
        std::vector<BoxEditor *> boxes;
        std::vector<CharacterEditor *> characters;

        Level(sf::RenderWindow *_window, sf::Texture &_background, sf::Texture &_chosenAssetTexture);

        ~Level();

        void clearGameBoard();

        void resetLevel();

        void setBackground(sf::Texture &_background, int _textureId);

        void assetWasChosen(std::string assetName);

        void putAssetOnMap(sf::Vector2f mousePosition, sf::Texture &texture);

        void makeFieldEmpty(const int posX, const int posY);

        void removeCharacterFromMap(char _color);

        void checkWhatAssetIsOnPosition(const int posX,const  int posY);

        void removeBoxFromPosition(const int _posX, const int _posY);

        void removeCharacterFromPosition(const int _posX, const int _posY);

        void putBoxOnMap(const bool isDestroyable, const int _posX, const int _posY, sf::Texture &texture);

        void putCharacterOnMap(const int _posX, const int _posY, sf::Texture &texture);

        void draw();
};