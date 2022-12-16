struct Food
{
        int foodCount;
};

struct LightSource
{
        int lightCount = 50;
};

struct AirSource
{
        int airCount;
};


struct Animal
{
        int stomach;
        int grassCount;
};



int retFoodCount(Food* obj);
int retLightCount(LightSource* obj);
int retAirCount(AirSource* obj);
void createAir(LightSource* obj, AirSource* obj1, int(*ptr)(LightSource* obj));
void eat(Food* obj, Animal* obj1, int(*ptr)(Food* obj));
void awake(bool state);
void breathes(AirSource* obj, int(*ptr)(AirSource* obj));

