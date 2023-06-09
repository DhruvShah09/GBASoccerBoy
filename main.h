#ifndef MAIN_H
#define MAIN_H

#include "gba.h"

// TODO: Create any necessary structs

/*
* For example, for a Snake game, one could be:
*
* struct snake {
*   int heading;
*   int length;
*   int row;
*   int col;
* };
*
* Example of a struct to hold state machine data:
*
* struct state {
*   int currentState;
*   int nextState;
* };
*
*/
struct soccerplayer {
    int xpos; 
    int ypos; 
    int width; 
    int height; 
};

struct defender { 
    int xpos; 
    int ypos; 
    int width; 
    int height; 
};

struct ball {
    int xpos; 
    int ypos; 
    int width; 
    int height;
}; 

#endif
