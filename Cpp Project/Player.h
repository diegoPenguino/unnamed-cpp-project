//
// Created by dieguin on 12/12/21.
//

#ifndef CPP_PROJECT_PLAYER_H
#define CPP_PROJECT_PLAYER_H

#include "Headers.h"

class Player {
public:
    uint16_t x;
    uint16_t y;

    static constexpr uint16_t R = 1;
    static constexpr uint16_t D = 2;
    static constexpr uint16_t L = 3;
    static constexpr uint16_t U = 4;

private:

public:
    Player(uint16_t, uint16_t);
    void MovePlayer(uint16_t);

};

#endif //CPP_PROJECT_PLAYER_H
