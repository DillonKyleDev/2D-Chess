#include "AI.h"
#include "../FlatEngine.h"


AI::AI()
{
	this->SetName("AI");
}

AI::~AI()
{
}

void AI::Start()
{
	turnColor = "black";
}

void AI::Update(float deltaTime)
{
	if (FlatEngine::gameManager->GetCurrentTurn() == turnColor)
	{

	}
}