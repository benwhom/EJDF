#pragma once
#include "GameObject.h"

namespace Engine{
    /*
      Actor
      Characters in the game. This might be a player or
      an NPC. This base class is derived from and does
      not contain any functionality.
     */
    class Actor : Engine::GameObject{
    protected:
        int health;
    public:
        Actor(){ } // default constructor
        virtual void move(InputHandler inputHandler) = 0;
        virtual void update(Engine::InputHandler inputHandler) = 0;
    };
}
