#include "rayon.h"
#include "constantes.h"

void les_angles(circle c,rayon *tab){

        for(int i=0;i<NBR_RAYON;i++){
                tab[i].x=c.x;
                tab[i].y=c.y;
                tab[i].angle=((float)i/NBR_RAYON)* 2 *  M_PI;
        }

}

void dessin_rayons(rayon *tab,SDL_Renderer* render,circle c2){
        for(int i=0;i<NBR_RAYON;i++){
                int limiteL=tab[i].x;
                int limiteH=tab[i].y;
                int j=0;
                float distance=pow(c2.r,2);
                while (limiteL<LARGEUR && limiteL>0 && limiteH<  HAUTEUR && limiteH>0){
                        limiteL=tab[i].x+j*cos(tab[i].angle);
                        limiteH=tab[i].y+j*sin(tab[i].angle);
                        float verf=pow(limiteL-c2.x,2)+pow(limiteH-c2.y,2);
                        if (verf<distance) break;
                         SDL_RenderDrawPoint(render,limiteL,limiteH);
                        j++;
                }
        }

}
