#include"header/include.h"

int main(){
    bool exit = false;
    system("color 0");
    loading.load("loading");
    while(!exit){
        int log;
        log = login.login();
        switch (log){
            case 0:
                exit = true;
                break;
            case 1:
                break;
            case 2:
                break;
        }
    }
}