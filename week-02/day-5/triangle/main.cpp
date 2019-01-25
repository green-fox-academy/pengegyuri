#include <iostream>
#include <SDL.h>
#include <math.h>

//Screen dimension constants
const int SCREEN_WIDTH = 500;
const int SCREEN_HEIGHT = 500;

//Draws geometry on the canvas
void draw(int a, int b, int c, int d);

//Starts up SDL and creates window
bool init();

//Frees media and shuts down SDL
void close();

//The window we'll be rendering to
SDL_Window* gWindow = nullptr;

//The window renderer
SDL_Renderer* gRenderer = nullptr;

void draw(int x, int y, int a)
{
    int t = 0;

    SDL_SetRenderDrawColor(gRenderer, 0xFF /*R*/, 0x00 /*G*/, 0x00 /*B*/, 0xFF /*A*/);
    for (int j = 0; j < 21; j++){
        y -= round(sqrt(3) / 2 * a);
        t = j * a / 2 - a;
        for (int i = j; i < 21; i += 1) {
            //x = j * a / 2 + a;
            x = i * a - t;
            SDL_RenderDrawLine(gRenderer, x, y, x + a / 2, (y + round(sqrt(3) / 2 * a)));
            SDL_RenderDrawLine(gRenderer, x, y, x - a / 2, (y + round(sqrt(3) / 2 * a)));
            SDL_RenderDrawLine(gRenderer, x - a / 2, (y + round(sqrt(3) / 2 * a)), x + a / 2, (y + round(sqrt(3) / 2 * a)));
        }
    }
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
    gWindow = SDL_CreateWindow( "triangle", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
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
    int x = 100;
    int a = 20;
    int y =round(sqrt(3) / 2 * a) * 21;
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

        // z = x + a/2;
        //w = y + round(sqrt(3)/2*a);

        //z = x - a/2;
        // w = y - round(sqrt(3)/2*a);
       // for (int i = 0; i < 501; i += 50) {

            draw(x, y, a);

      //  }
        //Update screen
        SDL_RenderPresent(gRenderer);
    }

    //Free resources and close SDL
    close();

    return 0;
}