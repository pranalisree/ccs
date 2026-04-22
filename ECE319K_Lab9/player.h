#pragma once
#include "types.h"
#include "input.h"
#include "tilemap.h"

typedef enum {
    PS_IDLE, PS_RUN, PS_JUMP, PS_FALL,
    PS_DASH, PS_ATTACK, PS_HURT, PS_DEAD
} PlayerState;

typedef struct {
    Body body;
    PlayerState state;
    int health;
    int soul;
    float dash_cooldown;
    float coyote_timer;
    int jump_buffer;
    bool facing_right;
} Player;

Player player_update(Player p, Input in, const TileMap *map, float dt);