#include "exercise7.h"

#ifndef SONG_H
#define SONG_H

class Song {
    private:
        string title;
        string artist;
    public:
        Song(string, string);
        string getTitle();
        string getArtist();
        friend ostream& operator<<(ostream&, const Song&);
};

#endif
