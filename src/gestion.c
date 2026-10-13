#include "gestion.h"
#include "constantes.h"

void mouvement_c2(circle *c2,SDL_Event event){
        if (event.key.keysym.scancode ==SDL_SCANCODE_RIGHT) c2->x+=20;
        if (event.key.keysym.scancode ==SDL_SCANCODE_LEFT) c2->x-=20;
        if (event.key.keysym.scancode ==SDL_SCANCODE_UP) c2->y-=20;
        if (event.key.keysym.scancode ==SDL_SCANCODE_DOWN) c2->y+=20;
        if(c2->x+c2->r > LARGEUR) c2->x=LARGEUR - c2->r;
        if(c2->x-c2->r <0) c2->x=c2->r;
        if(c2->y+c2->r>HAUTEUR )c2->y=HAUTEUR - c2->r;
        if(c2->y-c2->r<0) c2->y=c2->r;
        printf("Terre : (%f,%f)\n",c2->x,c2->y);
}
void quitter_fen(int *running,SDL_Event event ){
        if(event.type== SDL_QUIT) *running =0;
        if (event.key.keysym.scancode ==SDL_SCANCODE_ESCAPE) *running=0;

}

void mouvement_sr(circle *c,SDL_Event event){
        if(event.type == SDL_MOUSEMOTION && event.motion.state){
                c->x=event.motion.x;
                c->y=event.motion.y;
                printf("soleil : (%f,%f)\n",c->x,c->y);
        }
}

void clear(SDL_Window* window,SDL_Renderer* render){

        SDL_DestroyWindow(window);
        SDL_DestroyRenderer(render);


}
