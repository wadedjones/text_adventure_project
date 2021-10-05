#include <iostream>

int main() {

    int door_select;
    char drive_car;
    char pet_dog;
    char door_walk;


    //game start pick a door 1 - 3

    std::cout << "Welcome to the game.\n";
    std::cout << "Your fate is not real. Nothing is real.\n";
    std::cout << "Pick a door. 1... 2... 3...\n";
    
    //user input 1,2,3
    std::cin >> door_select;

    while ((door_select != 1) && (door_select != 2) && (door_select != 3)) {
        std::cout << "Sigh, I said 1... 2... 3...\n";
        std::cin >> door_select;
    }
    if (door_select == 1) {
        std::cout << "Congratulations, it's a car!\n";
        std::cout << "Will you drive off? [Y]es... [N]o...\n";
        std::cin >> drive_car;
        if (drive_car == 'y') {
            std::cout << "The car exploded. You lose.\n";
        } else if (drive_car == 'n') {
            std::cout << "The car exploded. Close call! Now go home.\n";
            return 0;
        }
    }
    if (door_select == 2) {
        std::cout << "It's a dog! Will you pet the dog? [Y]es... [N]o...\n";
        std::cin >> pet_dog;
        if (pet_dog == 'y') {
            std::cout << "Yes this dog is amazing, thank you, but you can't have it. Go Home.\n";
            return 0;
        } else if (pet_dog == 'n') {
            std::cout << "What are you a cat person? Get outta here! You lose!\n";
            return 0;
        }
    }
    if (door_select == 3) {
        std::cout << "This door is empty, will you walk through it? [Y]es... [N]o...\n";
        std::cin >> door_walk;
        if (door_walk == 'y') {
            std::cout << "Congratulations! This door is now your new home!\n";
            return 0;
        } else if (door_walk == 'n') {
            std::cout << "Okay fine, goodbye, loser.\n";
            return 0;
        }
    }

}