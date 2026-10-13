#include "circle.h"
#include<SDL2/SDL.h>
#include<math.h>


	typedef struct rayon{
		 int x,y; float angle ;
	}rayon;

	void les_angles(circle c,rayon *tab);

	void dessin_rayons(rayon *tab,SDL_Renderer* render,circle c2);
