#include <SDL2/SDL.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    // Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
        return 1;
    }

    // Create a window
    SDL_Window *window = SDL_CreateWindow(
        "SDL2 Test Window", 
        SDL_WINDOWPOS_CENTERED, 
        SDL_WINDOWPOS_CENTERED, 
        640, 480, 
        SDL_WINDOW_SHOWN
    );
    
    if (!window) {
        printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
        SDL_Quit();
        return 1;
    }

    // Create a renderer
    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (!renderer) {
        printf("Renderer could not be created! SDL_Error: %s\n", SDL_GetError());
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }

    // Set the renderer color (red, green, blue, alpha)
    SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);

    // Clear the screen with the set color
    SDL_RenderClear(renderer);

    // Update the screen
    SDL_RenderPresent(renderer);

    // Wait for 3 seconds before exiting
    SDL_Delay(7000);

    // Clean up and close
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
