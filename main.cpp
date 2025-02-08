#include <stdlib.h>
#include <iostream> 
#include "creature.h"

using namespace std; 

void questionaire() {
    cout << "Do you garden or farm?" << endl;

    cout << "Do you spend time by the water?" << endl;

}

int main(){
    cout << "Welcome, I'm Andromeda, I will assist you in choosing ";
    cout << "the invasive species that you would like to exterminate :)" << endl;
    
    //cout << questionaire() << endl;
    creature carp;
    carp.name = "carp";
    carp.danger = 100;
    cout << carp.name << endl;
    cout << carp.name << " danger level: " << carp.danger << endl;
    return 0;
}
