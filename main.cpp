#include <stdlib.h>
#include <iostream>
#include <string> 
#include <vector>
#include "Creature.h"


#include "Leaderboard.h"
using namespace std; 

Creature invasives[10];
vector <Creature> insectVec;
vector<Creature> plantVec;

void instantiate(){   
    // Bugs
    invasives[0] = Creature("Queen Anne's Lace", 100, "Midwest", "A member of the carrot family covering fields with lacy white blooms while quietly outcompeting native plants and altering prairie ecosystems. ");
    invasives[1] = Creature("Tomato Worm", 100, "Midwest", "A fleshy blue worm frequently found in gardens.");
    invasives[2] = Creature("Spongy Moth", 100, "Midwest", "A relentless defoliator, the spongy moth’s caterpillars swarm trees like a plague, leaving behind skeletal forests and ecological chaos.");
    invasives[3] = Creature("Pine Shoot Beetle", 100, "Midwest", "A silent invader of pines, the pine shoot beetle tunnels into young shoots, stunting growth and weakening forests from the inside out.");
    invasives[4] = Creature("Spotted Lanternfly", 100, "Midwest", "A winged treehopper insect that sucks the sap from plants, damaging them.");

    // Plants
    invasives[5] = Creature("Queen Anne's Lace", 100, "Midwest", "A member that overs fields with lacy white blooms while quietly outcompeting native plants and altering prairie ecosystems.");
    invasives[6] = Creature("Bush Honeysuckle", 75, "Midwest Forests, Parks", " With its sweet-scented flowers and dense thickets, bush honeysuckle deceives the landscape, suffocating native plants while casting forests into perpetual shadow.");
    invasives[7] = Creature("Buckthorn", 100, "Midwest", "A ruthless conqueror of woodlands, buckthorn forms impenetrable thickets, choking out native plants and leaving behind a barren, lifeless understory.");
    invasives[8] = Creature("Emerald Ash Borer", 100, "Midwest Forests, Parks", " A glittering green menace, the Emerald Ash Borer burrows beneath bark, silently hollowing out ash trees until they stand as lifeless husks in its wake.");
    invasives[9] = Creature("Garlic Mustard", 100, "Midwest", "A silent invader of the forest floor, garlic mustard spreads ruthlessly, releasing chemicals that poison the soil and suppress native plant life.");

    for(int i = 0; i<5; i++){
        insectVec.push_back(invasives[i]);
        plantVec.push_back(invasives[i+5]);
    }
    Leaderboard plantLeaderboard(plantVec);
    Leaderboard insectLeaderboard(insectVec);



}

// AI collects information from user to best suit their interests
void questionaire() {
    vector<string> questions = {"Do you garden or farm?", "Do you spend time by the water?", 
        "Do you spend time by the forest?", "Are you a morning person or a night person?",
        "Are you okay with touching/killing bugs?", "Are you okay with touching/kill plants?"};
    vector<char> responses;

    vector<string> prioritySpec;


    // This for loop asks questions
    for (int i = 0; i < questions.size(); ++i) {
        char answer;

        cout << questions.at(i) << endl;
        cout << "Enter [y/n]: " << endl;
        cin >> answer;

        responses.push_back(answer);
    }


    // This for loop organizes the relevance of each species
    for (int i = 0; i < responses.size(); ++i) {
        if (i == 0) {
            if (responses.at(i) == 'y') {
                //prioritySpec.push_back(invasives[1].name);
            }
            else {
                continue;
            }
        }
        if (i == 1) {
            if (responses.at(i) == 'y') {
                //prioritySpec.push_back(invasives[].name)
            }
            else {
                continue;
            }
            
        }
        if (i == 2) {
            if (responses.at(i) == 'y') {
                //prioritySpec.push_back(invasives[].name)

            }
            else {
                continue;
            }
        }
        if (i == 3) {
            if (responses.at(i) == 'y') {
                //prioritySpec.push_back(invasives[].name)
            }
            else {
                continue;
            }
        }
        if (i == 4) {
            if (responses.at(i) == 'y') {
                //prioritySpec.push_back(invasives[].name)
            }
            else {
                continue;
            }
        }
        if (i == 5) {
            if (responses.at(i) == 'y') {
                //prioritySpec.push_back(invasives[].name)
            }
            else {
                continue;
            }
        }
    } 
}

void matcher();

int main(){
    system("Rickroll.jpg");
    instantiate();

    cout << "Welcome, I'm Andromeda. I will assist you in choosing ";
    cout << "the invasive species that you would like to exterminate :)" << endl;
    
    questionaire();
    
    matcher();

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
