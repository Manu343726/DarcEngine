//                                 
//   _____     _                   
//  |     |___|_|___   ___ ___ ___ 
//  | | | | .'| |   |_|  _| . | . |
//  |_|_|_|__,|_|_|_|_|___|  _|  _|
//                        |_| |_|  
//						
//	Ascii Art (Rectangles) from: http://patorjk.com/software/taag/
//
//	Author: ZaruWright
//
#include <iostream>

#include "Engine/Engine.h"
#include "Graphics/Enumerators.h"
#include "Application/DarcApplication.h"

#include "App.h"

int main (int argc, char* argv[]){

	std::cout << "Funciona" << std::endl;

	// Init stuff
	App::CApp app = App::CApp();
	DarcApplication::IDarcApplication& darcApp = app;
	DarcEngine::CEngine& darcEngine = DarcEngine::CEngine::getInstance();

    darcEngine.init(DarcGraphics::GraphicEngines::OPENGL, darcApp);
	darcEngine.run();
	darcEngine.release();

	return 0;
}