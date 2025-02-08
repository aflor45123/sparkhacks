#include <stdlib.h>
#include <iostream>
#include <string> 
#include <vector>
#include "Creature.h"

using namespace std; 

Creature invasives[10];

void instantiate(){
    invasives.push_back(Creature("Queen Anne's Lace", 100, "Midwest", "A member of the carrot family original brought to America as a garden plant."));
    invasives.push_back(Creature("Tomato Worm", 100, "Midwest", "A fleshy blue worm frequently found in gardens."));
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
    invasives[0].as_string();
    return 0;
}
