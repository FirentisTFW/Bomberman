#pragma once
#include "level.h"

class LevelEditorClickEvent {

    public:
        sf::Event event;
        sf::Vector2f mousePosition;
        LevelEditorUI* ui;
        Level* level;

        LevelEditorClickEvent(const sf::Event &_event, LevelEditorUI* &_ui);

        ~LevelEditorClickEvent();

        std::string checkMouseClick(sf::Vector2f _mousePosition);

        bool checkClickOnButtons();

        std::string checkClickOnAssets();

        bool isClickOnMap();
};