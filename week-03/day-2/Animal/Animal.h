//
// Created by gyuri on 2019.01.29..
//

#ifndef ANIMAL_ANIMAL_H
#define ANIMAL_ANIMAL_H


class Animal {

    public:
        Animal();
        int getHunger();
        void  setHunger(int);
        int geThirst() ;
        void setThirst(int) ;
        void eat();
        void drink();
        void play();

    private:
        int hunger = 50;
        int thirst = 50;


};


#endif //ANIMAL_ANIMAL_H
