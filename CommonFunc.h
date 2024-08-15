#pragma once
#ifndef __COMMONFUNC__
#define __COMMONFUNC__

#include <windows.h>
#include <string>
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <SDL_mixer.h>
using namespace std;

static SDL_Window* gWindow = NULL;
static SDL_Renderer* gRenderer = NULL;
static SDL_Event gEvent;

const string WINDOW_TITLE = "Flying Kirby";

const int MIX_CHANNEL = -1;

const int FRAME_PER_SECOND = 60;
const int SCREEN_WIDTH = 928;
const int SCREEN_HEIGHT = 522;

const int GROUND = 430;
const int SCREEN_BPP = 64;
const double GROUND_SPEED = 4;
const double ENEMY_SPEED = 4;

//const int GRASS_HEIGHT = 8;
const int MAX_JUMP = 240;

const int JUMP_POW = 18;
const double GRAVITY_FALL = 0.41;
const int MAX_ACCELERATION = 9;

const int RUNNING_FRAMES = 6;
static SDL_Rect kirby_frame[RUNNING_FRAMES];

const int FONT_SIZE = 35;

/* RENDER DRAW COLOR */
const int RENDER_DRAW_COLOR = 255;

const int PLAY_BUTTON_POSX = 371;
const int PLAY_BUTTON_POSY = 275;
const int HELP_BUTTON_POSX = 371;
const int HELP_BUTTON_POSY = 338;
const int EXIT_BUTTON_POSX = 371;
const int EXIT_BUTTON_POSY = 402;
const int BACK_BUTTON_POSX = 31;
const int BACK_BUTTON_POSY = 29;
const int PAUSE_BUTTON_POSX = 31;
const int PAUSE_BUTTON_POSY = 29;
const int CONTINUE_BUTTON_POSX = 31;
const int CONTINUE_BUTTON_POSY = 29;


#endif /* __COMMONFUNC__ */
