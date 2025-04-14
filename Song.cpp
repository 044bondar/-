#include "Song.h"

Song::Song() : title("Unknown"), artist("Unknown"), duration(0.0) {}

Song::Song(std::string t, std::string a, double d) : title(t), artist(a), duration(d) {}

Song::~Song() {
    std::cout << "Song object destroyed." << std::endl;
}

void Song::display() const {
    std::cout << "Song: " << title << " by " << artist << " (" << duration << " min)" << std::endl;
}