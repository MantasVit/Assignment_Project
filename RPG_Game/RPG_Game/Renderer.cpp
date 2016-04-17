#include "Renderer.h"

Renderer* Renderer::rendererPointer = nullptr;

Renderer::Renderer(){
}

Renderer::~Renderer(){
}

Renderer* Renderer::useRenderer(){
	if(rendererPointer == nullptr){
		rendererPointer = new Renderer();
		std::cout<<"Renderer created."<<std::endl;
		return rendererPointer;
	}
	//std::cout<<"SDL manager already exists."<<std::endl;
	return rendererPointer;
}

void Renderer::createRenderer(SDL_Window* window){
	mainRenderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
}

SDL_Renderer* Renderer::getRenderer(){
	return mainRenderer;
}

void Renderer::clearRenderer(SDL_Renderer* renderer){
	SDL_RenderClear(renderer);
}

void Renderer::renderTexture(SDL_Renderer* renderer, SDL_Texture* texture, SDL_Rect* camera, SDL_Rect* rect){
	SDL_RenderCopy(renderer, texture, camera, rect);
}
void Renderer::updateRenderer(SDL_Renderer* renderer){
	SDL_RenderPresent(renderer);
}

void Renderer::render(SDL_Renderer* renderer){
	SDL_RenderClear(renderer);
	for(int i = 0; i < renderList.size(); i++){
		SDL_RenderCopy(renderer, renderList.front()->getTexture(), renderList.front()->getTextureRect(), renderList.front()->getRenderArea());
		renderList.pop();
	}
	SDL_RenderPresent(renderer);
}

void Renderer::addToRenderList(Object* object){
	renderList.push(object);
}