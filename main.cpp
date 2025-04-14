#include "MusicPlayer.h"

int main() {
    Song song1("GigaChad Theme (Phonk House Version)", "g3ox_em", 2.26);
    Song song2("Smells like Teen Spirit", "Nirvana", 4.39);
    
    Playlist myPlaylist("My Favorite Songs");
    myPlaylist.addSong(song1);
    myPlaylist.addSong(song2);
    
    MusicPlayer player(myPlaylist);
    player.play();
    
    return 0;
}