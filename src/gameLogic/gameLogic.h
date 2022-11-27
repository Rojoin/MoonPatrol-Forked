#pragma once
#include "gameObjects/Enemy.h"
#include"gameObjects/Obstacle.h"
#include "gameObjects/player.h"

bool isCharacterObstacleColliding(Player* character, Obstacle* obstacle);
bool isBulletEnemyColliding(Bullet* bullet, Enemy* enemy);