#include <SDL2/SDL.h>
#include <iostream>
#include <vector>
#include <ctime>

// Constants
const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;
const int BAR_WIDTH = 4;
const int BAR_HEIGHT_MULTIPLIER = 2;
const int DELAY_MS = 5;

// Function to delay execution
void delay(int milliseconds) {
    SDL_Delay(milliseconds);
}

// Function to initialize SDL and create a window
bool initializeSDL(SDL_Window** window, SDL_Renderer** renderer) {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cout << "SDL could not initialize! SDL_Error: " << SDL_GetError() << std::endl;
        return false;
    }

    *window = SDL_CreateWindow("Selection Sort Visualizer", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    if (*window == nullptr) {
        std::cout << "Window could not be created! SDL_Error: " << SDL_GetError() << std::endl;
        return false;
    }

    *renderer = SDL_CreateRenderer(*window, -1, SDL_RENDERER_ACCELERATED);
    if (*renderer == nullptr) {
        std::cout << "Renderer could not be created! SDL_Error: " << SDL_GetError() << std::endl;
        return false;
    }

    return true;
}

// Function to load bars into a vector
void loadBars(std::vector<int>& bars, int count) {
    bars.clear();
    bars.reserve(count);

    srand(static_cast<unsigned>(time(nullptr)));

    for (int i = 0; i < count; ++i) {
        int barHeight = rand() % (SCREEN_HEIGHT / BAR_HEIGHT_MULTIPLIER);
        bars.push_back(barHeight);
    }
}

// Function to draw bars on the screen
void drawBars(SDL_Renderer* renderer, const std::vector<int>& bars) {
    SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0xFF);
    SDL_RenderClear(renderer);

    for (size_t i = 0; i < bars.size(); ++i) {
        int x = i * BAR_WIDTH;
        int y = SCREEN_HEIGHT - bars[i] * BAR_HEIGHT_MULTIPLIER;
        SDL_Rect rect = {x, y, BAR_WIDTH, bars[i] * BAR_HEIGHT_MULTIPLIER};

        SDL_SetRenderDrawColor(renderer, 0x00, 0x00, 0xFF, 0xFF);
        SDL_RenderFillRect(renderer, &rect);
    }

    SDL_RenderPresent(renderer);
}

// Function to perform selection sort
void selectionSort(std::vector<int>& bars, SDL_Renderer* renderer) {
    for (size_t i = 0; i < bars.size(); ++i) {
        size_t minIndex = i;

        for (size_t j = i + 1; j < bars.size(); ++j) {
            if (bars[j] < bars[minIndex]) {
                minIndex = j;
            }
        }

        std::swap(bars[i], bars[minIndex]);

        drawBars(renderer, bars);
        delay(DELAY_MS);
    }
}

// Main function
int main() {
    SDL_Window* window = nullptr;
    SDL_Renderer* renderer = nullptr;

    if (!initializeSDL(&window, &renderer)) {
        return 1;
    }

    std::vector<int> bars;

    loadBars(bars, SCREEN_WIDTH / BAR_WIDTH);
    drawBars(renderer, bars);
    delay(1000);

    selectionSort(bars, renderer);

    delay(2000);

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}

