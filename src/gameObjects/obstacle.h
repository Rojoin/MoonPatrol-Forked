#pragma once
#include "raylib.h"


namespace OBJ
{

	class Obstacle
	{
	private:
		Rectangle rec;
		bool jumped;
		Texture2D texture;
		float scale;
		const float SPAWN_POSITION_X = 1280.0f;
		const float SPAWN_POSITION_y = 600.0f;
		const int MAX_GRAVITY_FORCE = 200;

	public:
		Obstacle();
		~Obstacle();
		void reset();
		void changePosX();
		void draw();
		bool checkCharacterPosition(float x);
		bool hasBeenJumped();
		void setJumpedState(bool state);
		Rectangle getRec();
	};
}