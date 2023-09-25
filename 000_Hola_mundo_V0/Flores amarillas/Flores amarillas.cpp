#include <iostream>
#include <SDL.h>

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

void drawFlower(SDL_Renderer* renderer, int x, int y) {
    // Dibuja el tallo de la flor (verde)
    SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
    SDL_RenderDrawLine(renderer, x, y, x, y - 100);

    // Dibuja los pétalos de la flor (amarillo)
    SDL_SetRenderDrawColor(renderer, 255, 255, 0, 255);
    int petalSize = 30;
    for (int i = 0; i < 360; i += 45) {
        float angle = i * 3.14159265 / 180.0;
        int xOffset = petalSize * cos(angle);
        int yOffset = petalSize * sin(angle);
        SDL_RenderDrawLine(renderer, x, y - 100, x + xOffset, y - 100 + yOffset);
    }

    // Dibuja el centro de la flor (naranja)
    SDL_SetRenderDrawColor(renderer, 255, 165, 0, 255);
    SDL_RenderDrawPoint(renderer, x, y - 100);
}

int main(int argc, char* args[]) {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cerr << "SDL could not initialize! SDL_Error: " << SDL_GetError() << std::endl;
        return 1;
    }

    SDL_Window* window = SDL_CreateWindow("Flor Amarilla", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    if (!window) {
        std::cerr << "Window could not be created! SDL_Error: " << SDL_GetError() << std::endl;
        return 1;
    }

    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (!renderer) {
        std::cerr << "Renderer could not be created! SDL_Error: " << SDL_GetError() << std::endl;
        return 1;
    }

    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);

    // Dibuja la flor en el centro de la ventana
    int centerX = SCREEN_WIDTH / 2;
    int centerY = SCREEN_HEIGHT / 2;
    drawFlower(renderer, centerX, centerY);

    SDL_RenderPresent(renderer);

    bool quit = false;
    SDL_Event e;

    while (!quit) {
        while (SDL_PollEvent(&e) != 0) {
            if (e.type == SDL_QUIT) {
                quit = true;
            }
        }
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
