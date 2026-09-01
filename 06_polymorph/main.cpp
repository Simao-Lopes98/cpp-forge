

#include <iostream>

using namespace std;



class Anmial {
    public:
        virtual void makeSound (void) {
            printf ("The anmial makes a sound\n");
        }
};

class Pig : public Anmial {
    public:
        void makeSound (void) {
            printf ("Wee Wee\n");
        }
};

class Bird : public Anmial {
    public:
        void makeSound (void) {
            printf ("Tweet Tweet\n");
        }
};

class Dog : public Anmial {
    public:
        void makeSound (void) override {
            printf ("Wof Wof\n");
        }
};

int main (void){
    Anmial myAnimal;
    Pig myPig;
    Bird myBird;

    myAnimal.makeSound();
    myPig.makeSound();
    myBird.makeSound();

    Dog myDog;
    Anmial * thatAnimal;
    thatAnimal = &myDog;

    thatAnimal->makeSound();

    
    return 0;
}

