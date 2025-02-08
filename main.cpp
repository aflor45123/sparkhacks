#include <stdlib.h>
#include <iostream>
#include <string> 
#include <vector>
#include "creature.h"

using namespace std; 

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

    /*for (int i = 0; i responses.sisze(); ++i) {
        cout << responses.at(i) << " " <<
    }*/
    

}

int main(){
    char garden;

    cout << "Welcome, I'm Andromeda, I will assist you in choosing ";
    cout << "the invasive species that you would like to exterminate :)" << endl;
    
    questionaire();
    return 0;
}
