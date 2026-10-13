#include "circle.h"



void init_circle(circle *c,float x,float y, float r){
        c->x=x;
        c->y=y;
        c->r=r;
}

void dessin_circle(circle c,SDL_Renderer* render,SDL_Color COLOR_CERCLE){

        SDL_SetRenderDrawColor(render,COLOR_CERCLE.r,COLOR_CERCLE.g,COLOR_CERCLE.b,COLOR_CERCLE.a);

        int distance=pow(c.r,2);
        for (int i=c.x-c.r;i<c.r+c.x;i++){
                for(int j=c.y-c.r;j<c.r+c.y;j++){
                        int pos=pow(c.x-i,2)+pow(c.y-j,2);
                        if (pos<distance)   SDL_RenderDrawPoint(render,i,j);
                }
        }


}
