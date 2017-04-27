#include "exercise9.h"
#include "Disc.h"

#ifndef VIDEODISC_H
#define VIDEODISC_H

class VideoDisc: public Disc {
    private:
        string director;
    public:
        VideoDisc(string title_, string type_, string director_) : Disc(title_, type_), director(director_) { };

        string getDirector() const { return director; }
        void setDirector(string director_) { director = director_; }

        virtual string print() { return Disc::print() + " by " + director; }
};

#endif
