#include <iostream>  // For debugging
#include <stdlib.h>
#include <vector>

using namespace std; 

class Creature{
    public: 
    string name;
    int danger;
    int relevance;
    int bounty;
    string location;
    string flavorText; 
    Creature(){
        name = ""; 
        danger = 0;
        relevance = 0;
        location = "";
        flavorText = "";
        bounty = 0;
    }

    Creature(string n, int d, string loc, string txt){
        name = n; 
        danger = d;
        relevance = 0;
        location = loc; 
        flavorText = txt;
        bounty = (danger + relevance)*1000;
    }

    void as_string(){
        cout << name << endl;
        cout << "   Danger: " << danger << endl;
        cout << "   Location: " << location << endl;
        cout << "   " << flavorText << endl;
    }
}; 




