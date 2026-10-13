#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>

#include "constantes.h"
#include "circle.h"
#include "rayon.h"
#include "gestion.h"


int main(){
        SDL_Window* window=SDL_CreateWindow("simulation-gravitation-2d-c (LEKADIR-Idir)",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,LARGEUR,HAUTEUR,0);
        SDL_Renderer* render=SDL_CreateRenderer(window,-1,SDL_RENDERER_ACCELERATED);
        if (!window || !render) {
                printf("error de %s\n",SDL_GetError());
                return 1;

        }
        circle c;
        circle c2;
        init_circle(&c,POSX,POSY,RAY);
        init_circle(&c2,POSX2,POSY2,RAY2);
        rayon tab[NBR_RAYON];
        dessin_circle(c,render,COLOR_CERCLE1);
        SDL_RenderPresent(render);
        int running =1;
        SDL_Event event;
        while(running){
                while(SDL_PollEvent(&event)) {
                        quitter_fen(&running,event);
                        mouvement_sr(&c,event);
                        mouvement_c2(&c2,event);

                }

                 SDL_SetRenderDrawColor(render,COLOR_FOND.r,COLOR_FOND.g,COLOR_FOND.b,COLOR_FOND.a);
                 SDL_RenderClear(render);
                dessin_circle(c2,render,COLOR_CERCLE2);
                dessin_circle(c,render,COLOR_CERCLE1);
                les_angles(c,tab);
                dessin_rayons(tab,render,c2);
                SDL_RenderPresent(render);
        }
clear(window,render);

return 0;

}
