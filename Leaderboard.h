#include <stdio.h>
#include <iostream>
#include <string>
#include "Creature.h"
#include <vector>
#include <algorithm>

using namespace std;

class Leaderboard{
    public:
    vector<Creature> rankedLeaderBoard;
    void displayLeaderboard(){
        for(Creature c: rankedLeaderBoard){
            cout<< "WANTED: " << c.name << " REASON: " << c.flavorText << " BOUNTY: "<< c.bounty << endl;
        }
    
    }
    bool compareBounty(Creature a, Creature b){
        return(a.bounty<b.bounty);
    }

    
    Leaderboard(vector<Creature> creatures){
        sort(creatures.begin(), creatures.end(), compareBounty);
        rankedLeaderBoard = creatures;
    }
   
};