//
// Created by grzegorz on 21.09.18.
//

#include "src/engine_gl.h"

using namespace engine;
using namespace graphics;
using namespace maths;

class Game : public EngineGL
{
private:
    Window *window;

public:
    Game(){
    }

    ~Game(){


    }

    void init() override {
        window = createWindow("TEST GAME", 960, 540);

    }

    void tick() override{

    }

    void update() override{


    }

    void render() override {

    }

};


int main(int argc, char const *argv[])
{
    Game game;
    game.start();
    return 0;
}

