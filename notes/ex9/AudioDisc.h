#include "exercise9.h"
#include "Disc.h"

#ifndef AUDIODISC_H
#define AUDIODISC_H

class AudioDisc: public Disc {
    private:
        string artist;
    public:
        AudioDisc(string title_, string type_, string artist_) : Disc(title_, type_), artist(artist_) { };

        string getArtist() const { return artist; }
        void setArtist(string artist_) { artist = artist_; }

        virtual string print() { return Disc::print() + " by " + artist; }
};

#endif
