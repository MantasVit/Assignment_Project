#pragma once

#include "SDL.h"
#include <sstream>
#include <iostream>

class FPS{
protected:
	static FPS* FPSPointer;
	int currentFrameTime;
	int currentTime;
	int frameTime;
	int lastTime;
	int FPScounter;
	std::string framesPerSecond;
	std::ostringstream convert;
	//Timer
public:
	FPS();
	~FPS();
	static FPS* useFPS();
	std::string update();
};

