#include "Renderer.h"

Renderer* Renderer::RendererPointer = nullptr;

Renderer::Renderer(){
}

Renderer::~Renderer(){
}

Renderer* Renderer::useRenderer(){
	if(RendererPointer == nullptr){
		RendererPointer = new Renderer();
		std::cout<<"Renderer created."<<std::endl;
		return RendererPointer;
	}
	//std::cout<<"SDL manager already exists."<<std::endl;
	return RendererPointer;
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
