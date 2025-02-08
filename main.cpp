#include <stdlib.h>
#include <iostream> 
#include "creature.h"

using namespace std; 

int main(){
    creature carp;
    carp.name = "carp";
    carp.danger = 100;
    cout << carp.name << endl;
    cout << carp.name << " danger level: " << carp.danger << endl;
    return 0;
}
