#include <iostream>
#include <SDL.h>
#include <math.h>

//Screen dimension constants
const int SCREEN_WIDTH = 1500;
const int SCREEN_HEIGHT = 1500;

//Draws geometry on the canvas
void draw(int a, int b, int c, int d, int e);

//Starts up SDL and creates window
bool init();

//Frees media and shuts down SDL
void close();

//The window we'll be rendering to
SDL_Window* gWindow = nullptr;

//The window renderer
SDL_Renderer* gRenderer = nullptr;


int tree(int x1, int y1, float angle, int length)
{
    int x2, y2;
    int color = 280 - length;
    x2 = x1 - (int)(cos(M_PI * (angle / 180)) * length);
    y2 = y1 - (int)(sin(M_PI * (angle / 180)) * length);
    draw(x1, y1, x2, y2, color);
    if (length <= 40)
    {
        return 0;
    } else {
        tree(x2, y2, angle - 20, length - 20);
        tree(x2, y2, angle + 20, length - 20);
        tree(x2, y2, angle, length - 20);
    }

}

void draw(int a, int b, int c, int d, int e)
{
    //SDL_Se

    SDL_SetRenderDrawColor(gRenderer, 130 /*R*/, e /*G*/, 100 /*B*/, 255 /*A*/);
    SDL_RenderDrawLine(gRenderer, a, b, c, d);
}

bool init()
{
    //Initialize SDL
    if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
    {
        std::cout << "SDL could not initialize! SDL Error: " << SDL_GetError() << std::endl;
        return false;
    }

    //Create window
    gWindow = SDL_CreateWindow( "tree", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
    if( gWindow == nullptr )
    {
        std::cout << "Window could not be created! SDL Error: " << SDL_GetError() << std::endl;
        return false;
    }

    //Create renderer for window
    gRenderer = SDL_CreateRenderer( gWindow, -1, SDL_RENDERER_ACCELERATED );
    if( gRenderer == nullptr )
    {
        std::cout << "Renderer could not be created! SDL Error: " << SDL_GetError() << std::endl;
        return false;
    }

    //Initialize renderer color
    SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );

    return true;
}

void close()
{
    //Destroy window
    SDL_DestroyRenderer( gRenderer );
    SDL_DestroyWindow( gWindow );
    gWindow = nullptr;
    gRenderer = nullptr;

    SDL_Quit();
}

int main( int argc, char* args[] )
{
    //Start up SDL and create window
    if( !init() )
    {
        std::cout << "Failed to initialize!" << std::endl;
        close();
        return -1;
    }

    //Main loop flag
    bool quit = false;

    //Event handler
    SDL_Event e;

    //While application is running
    while( !quit ) {
        //Handle events on queue
        while (SDL_PollEvent(&e) != 0) {
            //User requests quit
            if (e.type == SDL_QUIT) {
                quit = true;
            }
        }

        //Clear screen
        SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0xFF, 0xFF);
        SDL_RenderClear(gRenderer);

        tree(750, 1500, 90, 200);

        //Update screen
        SDL_RenderPresent(gRenderer);
    }

    //Free resources and close SDL
    close();

    return 0;
}