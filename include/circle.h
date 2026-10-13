#ifndef CIRCLE_H
#define CIRCLE_H
#include<SDL2/SDL.h>
#include<math.h>



	typedef struct circle{
		float x,y,r;
	}circle;
	void init_circle(circle *c,float x,float y, float r);
	void dessin_circle(circle c,SDL_Renderer* render,SDL_Color COLOR_CERCLE);
#endif
