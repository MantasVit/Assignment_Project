#include "EngineManager.h"

EngineManager* EngineManager::EngineManagerPointer = nullptr;

EngineManager::EngineManager(){
	SDL_INIT_EVERYTHING;
}

EngineManager::~EngineManager(){

}

EngineManager* EngineManager::getManager(){
	if(EngineManagerPointer == nullptr){
		EngineManagerPointer = new EngineManager();
		std::cout<<"Engine manager created."<<std::endl;
		return EngineManagerPointer;
	}
	//std::cout<<"SDL manager already exists."<<std::endl;
	return EngineManagerPointer;
}

void EngineManager::createWindow(std::string gameTitle, int resolutionWidth, int resolutionHeight){
	gameWindow = SDL_CreateWindow(gameTitle.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, resolutionWidth, resolutionHeight, SDL_WINDOW_SHOWN);
	Renderer::useRenderer()->createRenderer(gameWindow);
	mine = new WorldSpace("mine", Renderer::useRenderer()->getRenderer());
	mainCamera.setCameraX(mine->getXCoordinates() / 2);
	mainCamera.setCameraY(mine->getYCoordinates() / 2);
	//myText->showText("lolktest", Renderer::useRenderer()->getRenderer());
	myText = new Text(Renderer::useRenderer()->getRenderer(), "fonts\\OpenSans-Regular.ttf", 100);
	fps = new FPS();
	
}

SDL_Event* EngineManager::getEvent(){
	return &gameEvent;
}

Camera* EngineManager::getCamera(){
	return &mainCamera;
}

void EngineManager::update(){
	Renderer::useRenderer()->clearRenderer(Renderer::useRenderer()->getRenderer());
	for(int i = 0; i < GameDatabase::useDatabase()->getSize(); i++){
		Renderer::useRenderer()->renderTexture(Renderer::useRenderer()->getRenderer(), GameDatabase::useDatabase()->getList().at(i)->getTexture(), NULL, GameDatabase::useDatabase()->getList().at(i)->getRect());
	}
	myText->outputText(FPS::useFPS()->update());
	myText->setText(Renderer::useRenderer()->getRenderer(), FPS::useFPS()->update());
	for (int i = 0; i < myText->getLetter().size(); i++) {
		Renderer::useRenderer()->renderTexture(Renderer::useRenderer()->getRenderer(), myText->getTexture(), myText->getLetterSourceRect(i), myText->getLetterRect(i));
	}
	
	//Renderer::useRenderer()->renderTexture(Renderer::useRenderer()->getRenderer(), myText->getTexture(), myText->getRect_3(), myText->getRect2());
	//Renderer::useRenderer()->renderTexture(Renderer::useRenderer()->getRenderer(), myText->getTexture(), myText->getRect_4(), myText->getRect3());
	//Renderer::useRenderer()->renderTexture(Renderer::useRenderer()->getRenderer(), myText->getTexture(), myText->getRect_5(), myText->getRect4());
	std::cout<<fps->update() << std::endl;
	Renderer::useRenderer()->updateRenderer(Renderer::useRenderer()->getRenderer());
}