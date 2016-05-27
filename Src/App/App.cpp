//                               
//   _____                       
//  |  _  |___ ___   ___ ___ ___ 
//  |     | . | . |_|  _| . | . |
//  |__|__|  _|  _|_|___|  _|  _|
//        |_| |_|       |_| |_|  
//						
//	Ascii Art (Rectangles) from: http://patorjk.com/software/taag/
//
//	Author: ZaruWright
//

#include "App.h"

// Darc includes
#include "Graphics/Scene.h"

#include <iostream>

namespace App
{
	bool CApp::init()
	{
		std::cout << "Init App" << std::endl;
		
		triangle = new DarcGraphics::CTriangle(std::string("Triangle"));

		DarcGraphics::CScene::getInstance().addEntity(triangle);

		return true;
	}

	bool CApp::run(float secs)
	{
		//std::cout << "This is my Game Loop!!!!" << std::endl;
		return true;
	}
	
	bool CApp::release()
	{
		std::cout << "Release App" << std::endl;
		delete triangle;
		return true;
	}
};