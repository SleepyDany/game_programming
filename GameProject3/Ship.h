#pragma once
#include "Actor.h"

class Game;
class InputComponent;

class Ship : public Actor
{
public:
	Ship(Game* game);

	void UpdateActor(float deltaTime) override;

	void ActorInput(const uint8_t* keyState) override;

private:

	InputComponent* mInput;

	float mLaserCountdown;
};

