//                           
//   _____               _   
//  |     |___ ___ ___  | |_ 
//  |  |  | . |  _| -_|_|   |
//  |_____|_  |_| |___|_|_|_|
//        |___|              
//					
//	Ascii Art (Rectangles) from: http://patorjk.com/software/taag/
//
//	Author: ZaruWright
//
#ifndef GRAPHICS_OGRE_H
#define GRAPHICS_OGRE_H

#include "Graphics.h"

namespace DarcGraphics{

    class COgre : CGraphics{
		/**
		Returns the class instance
		*/
		static COgre& getInstance();

	protected:
		/**
		Constructor by default.
		*/
		COgre() = default;

		/**
		Destructor by default.
		*/
		~COgre() = default;

		/**
		OpenGl initialization.
		*/
		void init() override;

		/**
		OpenGl release
		*/
		void release() override;

		/**
		Update graphics
		*/
		void tick(float msecs) override;
	private:
	};

}

#endif // GRAPHICS_Ogre_H