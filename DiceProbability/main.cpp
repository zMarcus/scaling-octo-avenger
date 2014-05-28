//
//  main.cpp
//  DiceProbability
//
//  Created by Marcus Omaiye on 5/27/14.
//  Copyright (c) 2014 cookies. All rights reserved.
//

#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int twoCount, threeCount, fourCount, fiveCount, sixCount,
    sevenCount, eightCount, nineCount, tenCount, elevenCount,
    twelveCount;
int ROLLS = 10;


void recordDice(int diceTotal){
    switch (diceTotal) {
        case 2:
            twoCount++;
            break;
        case 3:
            threeCount++;
        case 4:
            fourCount++;
        case 5:
            fiveCount++;
        case 6:
            sixCount++;
        case 7:
            sevenCount++;
            break;
        case 8:
            eightCount++;
        case 9:
            nineCount++;
        case 10:
            tenCount++;
        case 11:
            elevenCount++;
        case 12:
            twelveCount++;
        default:
            break;
    }
}

void showResults(){
    cout << "Resulted in 2 " << twoCount << " times" << endl;
    cout << "Resulted in 3 " << threeCount << " times" << endl;
    cout << "Resulted in 4 " << fourCount << " times" << endl;
    cout << "Resulted in 5 " << fiveCount << " times" << endl;
    cout << "Resulted in 6 " << sixCount << " times" << endl;
    cout << "Resulted in 7 " << sevenCount << " times" << endl;
    cout << "Resulted in 8 " << eightCount << " times" << endl;
    cout << "Resulted in 9 " << nineCount << " times" << endl;
    cout << "Resulted in 10 " << tenCount << " times" << endl;
    cout << "Resulted in 11 " << elevenCount << " times" << endl;
    cout << "Resulted in 12 " << twelveCount << " times" << endl;
}

int main(int argc, const char * argv[])
{
    int dice1;
    int dice2;
    int diceTotal;

    // Call srand outside of loop
    // bc it should only be called once, EVER!
    srand(time(NULL));
    
    // Begin the dice rolling!
    for (int i = 1; i < ROLLS + 1; i++) {
        
        cout << "--------------------" << endl;
        cout << "Dice roll number: " << i << endl;
        cout << "--------------------" << endl;
        
        dice1 = rand()%6 + 1;
        printf("Dice 1: %d\n\n",dice1);
        
        dice2 = rand()%6 + 1;
        printf("Dice 2: %d\n\n", dice2);
        
        diceTotal = dice1 + dice2;
        cout << "Dice1 + Dice2: " << diceTotal << endl;
        
        recordDice(diceTotal);
    }
    
    showResults();
    
    return 0;
}