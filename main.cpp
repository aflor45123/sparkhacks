#include <stdlib.h>
#include <iostream> 
#include <vector> 
#include "Creature.h"

using namespace std; 

Creature invasives[10];

void instantiate(){
    invasives[0] = Creature("Queen Anne's Lace", 100, "Midwest", "A member of the carrot family original brought to America as a garden plant.");
    invasives[1] = Creature("Tomato Worm", 100, "Midwest", "A fleshy blue worm frequently found in gardens.");
}

void questionaire() {
    cout << "Do you garden or farm?" << endl;
    cout << "Do you spend time by the water?" << endl;

}

int main(){
    instantiate();

    //cout << "Welcome, I'm Andromeda, I will assist you in choosing ";
    //cout << "the invasive species that you would like to exterminate :)" << endl;
    cout << "Welcome, I'm Andromeda, I will assist you in choosing ";
    cout << "the invasive species that you would like to exterminate :)" << endl;
    int bestRelvance = 0;
    int bestMatch;
    for(int i = 0; i < 10; i++){
        if(bestRelvance<invasives[i].relevance){
            bestRelvance = invasives[i].relevance;
            bestMatch = i;
        }
    }
    invasives[bestMatch].as_string();
    return 0;
}
