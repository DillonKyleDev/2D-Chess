#include "StartButton.h"
#include "../Button.h"
#include "../FlatEngine.h"

StartButton::StartButton()
{
}

StartButton::~StartButton()
{
}

void StartButtonOnMouseOver(std::shared_ptr<FlatEngine::GameObject> thisObject)
{
}

void StartButtonOnMouseEnter(std::shared_ptr<FlatEngine::GameObject> thisObject)
{
	thisObject->GetSpriteComponent()->SetTexture("assets/images/SingleButtonHovered.png");
	std::shared_ptr<FlatEngine::Audio> clickedAudio = std::static_pointer_cast<FlatEngine::Audio>(thisObject->GetComponent(FlatEngine::ComponentTypes::Audio));
	clickedAudio->Play();
}

void StartButtonOnMouseLeave(std::shared_ptr<FlatEngine::GameObject> thisObject)
{
	thisObject->GetSpriteComponent()->SetTexture("assets/images/SingleButton.png");
}

void StartButtonOnLeftClick(std::shared_ptr<FlatEngine::GameObject> thisObject)
{
	std::shared_ptr<FlatEngine::Audio> clickedAudio = std::static_pointer_cast<FlatEngine::Audio>(thisObject->GetComponent(FlatEngine::ComponentTypes::Audio));
	clickedAudio->Play();
	FlatEngine::LoadScene("ClearGameBoard.json");
}

void StartButtonOnRightClick(std::shared_ptr<FlatEngine::GameObject> thisObject)
{
}

void StartButton::Start()
{
	std::shared_ptr<FlatEngine::Audio> clickedAudio = std::static_pointer_cast<FlatEngine::Audio>(GetOwner()->AddComponent(FlatEngine::ComponentTypes::Audio));
	clickedAudio->LoadEffect("assets/audio/StartHovered.wav");
	clickedAudio->SetIsMusic(false);
	
	std::shared_ptr<FlatEngine::Button> button = std::static_pointer_cast<FlatEngine::Button>(this->GetOwner()->GetComponent(FlatEngine::ComponentTypes::Button));
	// Register Mouse Events functions to the Button
	button->SetOnMouseOver(StartButtonOnMouseOver);
	button->SetOnMouseEnter(StartButtonOnMouseEnter);
	button->SetOnMouseLeave(StartButtonOnMouseLeave);
	button->SetOnMouseLeftClick(StartButtonOnLeftClick);
	button->SetOnMouseRightClick(StartButtonOnRightClick);
}

void StartButton::Update(float deltaTime)
{
}