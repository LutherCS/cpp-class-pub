#include "AudioDisc.h"

AudioDisc::AudioDisc(string title_, string type_, string artist_) : Disc(title_, type_), artist(artist_) { };

string AudioDisc::print() const { return title + " by " + artist + " /" + type; }
