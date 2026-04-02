//Create a program Media Player with base class Media with virtual play(). Derived classes Audio and Video override play().
#include<iostream>
using namespace std;

class MediaPlayer{
    public:
        virtual void play()=0;
};
class Audio:public MediaPlayer{
    protected:
        string audioSong;
    public:
        Audio(string name):audioSong(name){}
        void play(){
            cout<<"Playing Audio song : "<<audioSong<<endl;
        }
};
class Video:public MediaPlayer{
    protected:
        string videoSong;
    public:
        Video(string name):videoSong(name){}
        void play(){
            cout<<"Playing Video song : "<<videoSong<<endl;
        }
};

int main(){
    MediaPlayer* ptr;
    Audio audio("hello");
    Video video("world");
    ptr=&audio;
    ptr->play();
    ptr=&video;
    ptr->play();
    return 0;
}