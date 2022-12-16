#include <iostream>
#include <chrono>
#include <thread>
#include "world.h"

Food grass;
LightSource sun;
AirSource tree;

void waiting()
{
    for (int i = 0; i < 30; ++i)
    {
        std::cout << ". ";
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
    }
    std::cout << std::endl;
}

int retLightCount(LightSource* obj)
{
    return obj->lightCount;
}

void createAir(LightSource* obj, AirSource* obj1, int(*ptr)(LightSource* obj))
{
    int outLightCount = retLightCount(&sun);
    while (outLightCount)
    {
        obj1->airCount += 2;
        outLightCount--;
    }
    std::cout << "\nThanks to the Sun for giving light.\n"
                << "Also thanks to the Tree for receiving oxygen from the light." << std::endl;
}

int retAirCount(AirSource* obj)
{
    return obj->airCount;
}

int retFoodCount(Food* obj)
{
    return obj->foodCount;
}

void eat(Food* obj, Animal* obj1, int(*ptr)(Food* obj))
{
    std::cout << "I am very hungry. I'm going to eat grass.\n" << std::endl;
    waiting();
    int outFoodCount = retFoodCount(&grass);
        while (outFoodCount)
        {
                outFoodCount--;
                obj1->stomach++;
        }
        std::cout << "\nOh, I ate grass and I'm not hungry anymore.\n" << std::endl;
        waiting();
}

void awake(bool state)
{
    if (state == false)
    {
        std::cout << "It's night, I am sleeping.\n" << std::endl;
        waiting();
        state = true;
    }
    if (state == true)
    {
        std::cout << "\nGood morning. It is morning.";
    }

}

void breathes(AirSource* obj, int(*ptr)(AirSource* obj))
{
    int outAirCount = retAirCount(&tree);
        while (outAirCount)
        {
                outAirCount--;
        }
  if (outAirCount == 0)
        {
                std::cout << "\nI'm sorry, but I need oxygen.\n" << std::endl;
                waiting();
        }
        return;
}


