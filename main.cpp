#include <iostream>
#include <chrono>
#include <thread>
#include "world.h"

extern Food grass;
Animal frog;
extern LightSource sun;
extern AirSource tree;

void controller();

int main()
{
            controller();
}

void controller()
{
    bool state = false;
    std::cout << "Hello, I'm frog Mrog.\n"
            << "I am an Armenian frog, but I will try to speak English. If my mistakes are many, forgive me.\n"
            << "You will follow my daily routine today.\n" << std::endl;
    awake(state);
    breathes(&tree, &retAirCount);
    createAir(&sun, &tree, &retLightCount);
    eat(&grass, &frog, &retFoodCount);
    std::cout << "\nThank you for following me.\nIt's already late, I'm going to sleep. \nGood night." << std::endl;
}
