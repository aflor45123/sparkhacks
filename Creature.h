#include <iostream>  // For debugging
#include <stdlib.h>
#include <vector>

using namespace std; 

class Creature{
    public: 
    string name;
    int danger;
    int relevance;
    string location;
    string flavorText; 
    Creature(){
        name = ""; 
        danger = 0;
        relevance = 0;
        location = "";
        flavorText = "";
    }

    Creature(string n, int d, string loc, string txt){
        name = n; 
        danger = d;
        relevance = 0;
        location = loc; 
        flavorText = txt;
    }

    void as_string(){
        cout << name << endl;
        cout << "   Danger: " << danger << endl;
        cout << "   Location: " << location << endl;
        cout << "   " << flavorText << endl;
    }
}; 




