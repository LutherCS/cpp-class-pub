#include "VideoDisc.h"

VideoDisc::VideoDisc(string title_, string type_, string director_) : Disc(title_, type_), director(director_) { };

string VideoDisc::print() const { return director + ": " + title; }