#include "FPS.h"

FPS* FPS::FPSPointer = nullptr;

FPS::FPS(){
	lastTime = 0;
}


FPS::~FPS()
{
}

FPS* FPS::useFPS(){
	if(FPSPointer == nullptr){
		FPSPointer = new FPS();
		return FPSPointer;
	}
	return FPSPointer;
}

std::string FPS::update(){
	convert.str("");
	currentFrameTime = SDL_GetTicks();
	if (currentFrameTime > lastTime) {
		FPScounter = (1000 / (currentFrameTime - lastTime + 4));
		convert<<FPScounter;
		framesPerSecond = convert.str();
		lastTime = currentFrameTime;
	}
	//std::cout<<framesPerSecond<<std::endl;
	return framesPerSecond;
}