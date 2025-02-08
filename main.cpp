#include <stdlib.h>
#include <iostream> 
#include "Creature.h"

using namespace std; 

void questionaire() {
    cout << "Do you garden or farm?" << endl;

    cout << "Do you spend time by the water?" << endl;

}

int main(){
    cout << "Welcome, I'm Andromeda, I will assist you in choosing ";
    cout << "the invasive species that you would like to exterminate :)" << endl;
    
    //cout << questionaire() << endl;
    Creature invasives[10];
    Creature lace("Queen Anne's Lace", 100, "Midwest", "text");
    invasives[0] = lace;
    invasives[0].as_string();
    return 0;
}
