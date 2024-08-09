#ifndef LOADING_H
#define LOADING_H

class Loading
{
public:
    void sleep(int num){
        this_thread::sleep_for(std::chrono::milliseconds(num));
    }
    void load(string message){
        cout<<message;
        cout<<".";
        sleep(150);
        cout <<".";
        sleep(150);
        cout <<".";
        sleep(150);
    }
};

#endif