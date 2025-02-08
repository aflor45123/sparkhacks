#include <stdlib.h>
#include <iostream> 
#include "creature.h"

using namespace std; 

Creature invasives[10];
invasives[0] = Creature("Queen Anne's Lace", 100, "Midwest", "A member of the carrot family original brought to America as a garden plant.");
invasives[1] = Creature("Tomato Worm", 100, "Midwest", "A fleshy blue worm frequently found in gardens.");

void questionaire() {
    cout << "Do you garden or farm?" << endl;

    cout << "Do you spend time by the water?" << endl;

}

int main(){
    cout << "Welcome, I'm Andromeda, I will assist you in choosing ";
    cout << "the invasive species that you would like to exterminate :)" << endl;
    
    //cout << questionaire() << endl;
    return 0;
}
