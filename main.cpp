#include <stdlib.h>
#include <iostream>
#include <string> 
#include <vector>
#include "Creature.h"

using namespace std; 

Creature invasives[10];

void instantiate(){
    // Bugs
    invasives[0] = Creature("Queen Anne's Lace", 100, "Midwest", "A member of the carrot family covering fields with lacy white blooms while quietly outcompeting native plants and altering prairie ecosystems. ");
    invasives[1] = Creature("Tomato Worm", 100, "Midwest", "A fleshy blue worm frequently found in gardens.");
    invasives[2] = Creature("Spongy Moth", 100, "Midwest", "A relentless defoliator, the spongy moth’s caterpillars swarm trees like a plague, leaving behind skeletal forests and ecological chaos.");
    invasives[3] = Creature("Pine Shoot Beetle", 100, "Midwest", "A silent invader of pines, the pine shoot beetle tunnels into young shoots, stunting growth and weakening forests from the inside out.");
    invasives[4] = Creature("", 100, "", "");

    // Plants
    invasives[5] = Creature("", 100, "", "");
    invasives[6] = Creature("", 100, "", "");
    invasives[7] = Creature("", 100, "", "");
    invasives[8] = Creature("", 100, "", "");
    invasives[9] = Creature("", 100, "", "");
}

void questionaire() {
    vector<string> questions = {"Do you garden or farm?", "Do you spend time by the water?", 
        "Do you spend time by the forest?", "Are you a morning person or a night person?",
        "Are you okay with touching/killing bugs?", "Are you okay with touching/kill fish?"};
    vector<char> responses;


    for (int i = 0; i < questions.size(); ++i) {
        char answer;

        cout << questions.at(i) << endl;
        cout << "Enter [y/n]: " << endl;
        cin >> answer;

        responses.push_back(answer);
    }
}

int main(){
    instantiate();

    //cout << "Welcome, I'm Andromeda, I will assist you in choosing ";
    //cout << "the invasive species that you would like to exterminate :)" << endl;
    cout << "Welcome, I'm Andromeda, I will assist you in choosing ";
    cout << "the invasive species that you would like to exterminate :)" << endl;
    
    questionaire();
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
