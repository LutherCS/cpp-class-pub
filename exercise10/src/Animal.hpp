#include "exercise10.hpp"

#ifndef ANIMAL_H
#define ANIMAL_H

class Animal {
    protected:
        const char* className;
        string name;
        int age;
        string habitat;
    public:
        /* Constructors */
        Animal(string name, int age, string habitat);
        virtual ~Animal() = default;
        /* Getters */
        inline string getName() const { return name; }
        inline int getAge() const { return age; }
        inline string getHabitat() const { return habitat; }
        /* Setters */
        inline void setHabitat(string habitat) { this->habitat = habitat; }
        /* Other member funtions */
        virtual string move() const = 0;
        virtual string sound() const = 0;
        /* Operator overloads */
        friend ostream& operator<<(ostream&, const Animal&);
};

#endif
