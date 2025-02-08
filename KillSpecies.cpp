#include <stdio.h>
#include <vector>
#include <string>
using namespace std;
 


class KillSpecies{
    public:
    int popularity; // how many hits is it getting 1 - 5
    int difficulty; //"how difficult is it to kill this thing, scale from 1 - 5"
    int threatL; // "how destructive are these, 1-5"
    int ovrRank; // the total weight of these combined
    int bounty; // how many points is it worth
    string habitat;
    string profile; // blurb about this species and its crimes against humanity

    void calcRank(int popularity, int difficulty, int threatL){
        ovrRank = (difficulty*3) + (threatL*2) - popularity;
    }

};