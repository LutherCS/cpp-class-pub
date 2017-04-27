#include "exercise9.h"

#ifndef ANIMAL_H
#define ANIMAL_H

class Animal {
    protected:
        const char* className;
        string name;
        int age;
        string habitat;
    public:
        Animal(string name_, int age_, string habitat_);

        string getName() const { return name; }
        void setName(string name_) { name = name_; }
        int getAge() const { return age; }
        void setAge(int age_) { age = age_; }
        string getHabitat() const { return habitat; }
        void setHabitat(string habitat_) { habitat = habitat_; }

        virtual string movement() const = 0;
        virtual string sound() const = 0;

        friend ostream& operator<<(ostream&, const Animal&);
};

#endif
