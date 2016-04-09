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
	Text::getText()->newText(Renderer::useRenderer()->getRenderer(), "fonts\\OpenSans-Regular.ttf", 100, 1);
	//Text::getText()->newText(Renderer::useRenderer()->getRenderer(), "fonts\\OpenSans-Regular.ttf", 1000, 1);
	//Text::getText()->newText(Renderer::useRenderer()->getRenderer(), "fonts\\OpenSans-Regular.ttf", 1000, 1);
	//Text::getText()->newText(Renderer::useRenderer()->getRenderer(), "fonts\\OpenSans-Regular.ttf", 1000, 1);
	//Text::getText()->newText(Renderer::useRenderer()->getRenderer(), "fonts\\OpenSans-Regular.ttf", 1000, 1);
	//Text::getText()->newText(Renderer::useRenderer()->getRenderer(), "fonts\\OpenSans-Regular.ttf", 1000, 2);
	//Text::getText()->newText(Renderer::useRenderer()->getRenderer(), "fonts\\OpenSans-Regular.ttf", 1000, 2);
	//Text::getText()->newText(Renderer::useRenderer()->getRenderer(), "fonts\\OpenSans-Regular.ttf", 1000, 2);
	//Text::getText()->newText(Renderer::useRenderer()->getRenderer(), "fonts\\OpenSans-Regular.ttf", 1000, 2);
	/*myText = new Text(Renderer::useRenderer()->getRenderer(), "fonts\\OpenSans-Regular.ttf", 1000, 2);
	myText2 = new Text(Renderer::useRenderer()->getRenderer(), "fonts\\OpenSans-Regular.ttf", 1000, 2);
	myText3 = new Text(Renderer::useRenderer()->getRenderer(), "fonts\\OpenSans-Regular.ttf", 1000, 2);
	myText4 = new Text(Renderer::useRenderer()->getRenderer(), "fonts\\OpenSans-Regular.ttf", 1000, 2);
	myText5 = new Text(Renderer::useRenderer()->getRenderer(), "fonts\\OpenSans-Regular.ttf", 1000, 2);
	myText6 = new Text(Renderer::useRenderer()->getRenderer(), "fonts\\OpenSans-Regular.ttf", 1000, 2);
	myText7 = new Text(Renderer::useRenderer()->getRenderer(), "fonts\\OpenSans-Regular.ttf", 1000, 2);
	myText8 = new Text(Renderer::useRenderer()->getRenderer(), "fonts\\OpenSans-Regular.ttf", 1000, 2);
	myText9 = new Text(Renderer::useRenderer()->getRenderer(), "fonts\\OpenSans-Regular.ttf", 1000, 2);
	myText10 = new Text(Renderer::useRenderer()->getRenderer(), "fonts\\OpenSans-Regular.ttf", 1000, 2);
	myText11 = new Text(Renderer::useRenderer()->getRenderer(), "fonts\\OpenSans-Regular.ttf", 1000, 2);
	myText12 = new Text(Renderer::useRenderer()->getRenderer(), "fonts\\OpenSans-Regular.ttf", 1000, 2);
	myText13 = new Text(Renderer::useRenderer()->getRenderer(), "fonts\\OpenSans-Regular.ttf", 1000, 2);
	myText14 = new Text(Renderer::useRenderer()->getRenderer(), "fonts\\OpenSans-Regular.ttf", 1000, 2);
	myText15 = new Text(Renderer::useRenderer()->getRenderer(), "fonts\\OpenSans-Regular.ttf", 1000, 2);
	myText16 = new Text(Renderer::useRenderer()->getRenderer(), "fonts\\OpenSans-Regular.ttf", 1000, 2);
	myText17 = new Text(Renderer::useRenderer()->getRenderer(), "fonts\\OpenSans-Regular.ttf", 1000, 2);
	myText18 = new Text(Renderer::useRenderer()->getRenderer(), "fonts\\OpenSans-Regular.ttf", 1000, 2);
	myText19 = new Text(Renderer::useRenderer()->getRenderer(), "fonts\\OpenSans-Regular.ttf", 1000, 2);
	myText20 = new Text(Renderer::useRenderer()->getRenderer(), "fonts\\OpenSans-Regular.ttf", 1000, 2);
	myText21 = new Text(Renderer::useRenderer()->getRenderer(), "fonts\\OpenSans-Regular.ttf", 1000, 2);
	myText22 = new Text(Renderer::useRenderer()->getRenderer(), "fonts\\OpenSans-Regular.ttf", 1000, 2);
	myText23 = new Text(Renderer::useRenderer()->getRenderer(), "fonts\\OpenSans-Regular.ttf", 1000, 2);
	myText24 = new Text(Renderer::useRenderer()->getRenderer(), "fonts\\OpenSans-Regular.ttf", 1000, 2);
	myText25 = new Text(Renderer::useRenderer()->getRenderer(), "fonts\\OpenSans-Regular.ttf", 1000, 2);
	myText26 = new Text(Renderer::useRenderer()->getRenderer(), "fonts\\OpenSans-Regular.ttf", 1000, 2);
	myText27 = new Text(Renderer::useRenderer()->getRenderer(), "fonts\\OpenSans-Regular.ttf", 1000, 2);
	myText28 = new Text(Renderer::useRenderer()->getRenderer(), "fonts\\OpenSans-Regular.ttf", 1000, 2);
	myText29 = new Text(Renderer::useRenderer()->getRenderer(), "fonts\\OpenSans-Regular.ttf", 1000, 2);
	myText30 = new Text(Renderer::useRenderer()->getRenderer(), "fonts\\OpenSans-Regular.ttf", 1000, 2);*/
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
	Text::getText()->outputText(FPS::useFPS()->update());
	//Text::getText()->setText(Renderer::useRenderer()->getRenderer(), FPS::useFPS()->update());
	/*myText2->outputText(FPS::useFPS()->update());
	//myText2->setText(Renderer::useRenderer()->getRenderer(), FPS::useFPS()->update());
	myText3->outputText(FPS::useFPS()->update());
	//myText3->setText(Renderer::useRenderer()->getRenderer(), FPS::useFPS()->update());
	myText4->outputText(FPS::useFPS()->update());
	//myText4->setText(Renderer::useRenderer()->getRenderer(), FPS::useFPS()->update());
	myText5->outputText(FPS::useFPS()->update());
	//myText5->setText(Renderer::useRenderer()->getRenderer(), FPS::useFPS()->update());
	myText6->outputText(FPS::useFPS()->update());
	//myText6->setText(Renderer::useRenderer()->getRenderer(), FPS::useFPS()->update());
	myText7->outputText(FPS::useFPS()->update());
	//myText7->setText(Renderer::useRenderer()->getRenderer(), FPS::useFPS()->update());
	myText8->outputText(FPS::useFPS()->update());
	//myText8->setText(Renderer::useRenderer()->getRenderer(), FPS::useFPS()->update());
	myText9->outputText(FPS::useFPS()->update());
	//myText9->setText(Renderer::useRenderer()->getRenderer(), FPS::useFPS()->update());
	myText10->outputText(FPS::useFPS()->update());
	//myText10->setText(Renderer::useRenderer()->getRenderer(), FPS::useFPS()->update());
	myText11->outputText(FPS::useFPS()->update());
	//myText11->setText(Renderer::useRenderer()->getRenderer(), FPS::useFPS()->update());
	myText12->outputText(FPS::useFPS()->update());
	//myText12->setText(Renderer::useRenderer()->getRenderer(), FPS::useFPS()->update());
	myText13->outputText(FPS::useFPS()->update());
	//myText13->setText(Renderer::useRenderer()->getRenderer(), FPS::useFPS()->update());
	myText14->outputText(FPS::useFPS()->update());
	//myText14->setText(Renderer::useRenderer()->getRenderer(), FPS::useFPS()->update());
	myText15->outputText(FPS::useFPS()->update());
	//myText15->setText(Renderer::useRenderer()->getRenderer(), FPS::useFPS()->update());
	myText16->outputText(FPS::useFPS()->update());
	//myText16->setText(Renderer::useRenderer()->getRenderer(), FPS::useFPS()->update());
	myText17->outputText(FPS::useFPS()->update());
	//myText17->setText(Renderer::useRenderer()->getRenderer(), FPS::useFPS()->update());
	myText18->outputText(FPS::useFPS()->update());
	//myText18->setText(Renderer::useRenderer()->getRenderer(), FPS::useFPS()->update());
	myText19->outputText(FPS::useFPS()->update());
	//myText19->setText(Renderer::useRenderer()->getRenderer(), FPS::useFPS()->update());
	myText20->outputText(FPS::useFPS()->update());
	//myText20->setText(Renderer::useRenderer()->getRenderer(), FPS::useFPS()->update());
	myText21->outputText(FPS::useFPS()->update());
	//myText21->setText(Renderer::useRenderer()->getRenderer(), FPS::useFPS()->update());
	myText22->outputText(FPS::useFPS()->update());
	//myText22->setText(Renderer::useRenderer()->getRenderer(), FPS::useFPS()->update());
	myText23->outputText(FPS::useFPS()->update());
	//myText23->setText(Renderer::useRenderer()->getRenderer(), FPS::useFPS()->update());
	myText24->outputText(FPS::useFPS()->update());
	//myText24->setText(Renderer::useRenderer()->getRenderer(), FPS::useFPS()->update());
	myText25->outputText(FPS::useFPS()->update());
	//myText25->setText(Renderer::useRenderer()->getRenderer(), FPS::useFPS()->update());
	myText26->outputText(FPS::useFPS()->update());
	//myText26->setText(Renderer::useRenderer()->getRenderer(), FPS::useFPS()->update());
	myText27->outputText(FPS::useFPS()->update());
	//myText27->setText(Renderer::useRenderer()->getRenderer(), FPS::useFPS()->update());
	myText28->outputText(FPS::useFPS()->update());
	//myText28->setText(Renderer::useRenderer()->getRenderer(), FPS::useFPS()->update());
	myText29->outputText(FPS::useFPS()->update());
	//myText29->setText(Renderer::useRenderer()->getRenderer(), FPS::useFPS()->update());
	myText30->outputText(FPS::useFPS()->update());*/
	//myText30->setText(Renderer::useRenderer()->getRenderer(), FPS::useFPS()->update());
	for (int i = 0; i < Text::getText()->getLetter().size(); i++) {
		Renderer::useRenderer()->renderTexture(Renderer::useRenderer()->getRenderer(), Text::getText()->getTexture(), Text::getText()->getLetterSourceRect(i), Text::getText()->getLetterRect(i));
	}
	
	//Renderer::useRenderer()->renderTexture(Renderer::useRenderer()->getRenderer(), myText->getTexture(), myText->getRect_3(), myText->getRect2());
	//Renderer::useRenderer()->renderTexture(Renderer::useRenderer()->getRenderer(), myText->getTexture(), myText->getRect_4(), myText->getRect3());
	//Renderer::useRenderer()->renderTexture(Renderer::useRenderer()->getRenderer(), myText->getTexture(), myText->getRect_5(), myText->getRect4());
	//std::cout<<"xD"<<std::endl;
	//std::cout<<fps->update() << std::endl;
	//Text::getText()->TEST(53);
	//Text::getText()->TEST(10);
	//Text::getText()->TEST(30);
	//Text::getText()->TEST(61);
	Renderer::useRenderer()->updateRenderer(Renderer::useRenderer()->getRenderer());
}