#ifndef SONG_H
#define SONG_H

#include <iostream>
#include <string>

class Song {
private:
    std::string title;
    std::string artist;
    double duration;
public:
    Song();
    Song(std::string t, std::string a, double d);
    ~Song();
    void display() const;
};