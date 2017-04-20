#include "exercise7.h"

#ifndef GAME_H
#define GAME_H

class Game {
    private:
        string title;
        int rating;
    public:
        Game(string, int);
        string getTitle();
        int getRating();
        friend ostream& operator<<(ostream&, const Game&);
};

#endif
