#include <iostream>
#include <string>

class virtualPet {
private:
    std::string name;
    int hunger = 40;
    int happiness = 30;

public:
    virtualPet(std::string petName, int petHunger, int petHappiness) {
        name = petName;
        hunger = petHunger;
        happiness = petHappiness;
    }

    void feed() {
        hunger = hunger + 20;
    }

    void play() {
        happiness = happiness + 30;
    }

    void stats() {
        std::cout << "pet's name: " << name << ", pet's hunger: " << hunger << ",  pet's happiness: " << happiness << std::endl;
    }
};

int main() {
    virtualPet dog("max", 40, 30);
    dog.feed();
    dog.play();
    dog.stats();

    return 0;
}
