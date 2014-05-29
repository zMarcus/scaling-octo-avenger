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
    twelveCount = 0;
int ROLLS = 10;
float prb = 0;


void recordDice(int diceTotal){
    switch (diceTotal) {
        case 2:
			cout << "increment 2!" << endl;
            twoCount++;
            break;
        case 3:
            threeCount++;
			break;
        case 4:
            fourCount++;
			break;
        case 5:
            fiveCount++;
			break;
        case 6:
            sixCount++;
			break;
        case 7:
            sevenCount++;
            break;
        case 8:
            eightCount++;
			break;
        case 9:
            nineCount++;
			break;
        case 10:
            tenCount++;
			break;
        case 11:
			cout << "increment 11!" << endl;
            elevenCount++;
			break;
        case 12:
            twelveCount++;
			break;
        default:
            break;
    }
}

double prbCalc(int numberCount){
	prb = numberCount / (double) ROLLS;
	prb *= 100;
	return prb;
}

void showResults(){
    //cout << "Resulted in 2 " << twoCount << " times" << endl;
	//cout << "Resulted in 3 " << threeCount << " times" << endl;
    //cout << "Resulted in 4 " << fourCount << " times" << endl;
    //cout << "Resulted in 5 " << fiveCount << " times" << endl;
    //cout << "Resulted in 6 " << sixCount << " times" << endl;
    //cout << "Resulted in 7 " << sevenCount << " times" << endl;
    //cout << "Resulted in 8 " << eightCount << " times" << endl;
    //cout << "Resulted in 9 " << nineCount << " times" << endl;
    //cout << "Resulted in 10 " << tenCount << " times" << endl;
    //cout << "Resulted in 11 " << elevenCount << " times" << endl;
	//cout << "Resulted in 12 " << twelveCount << " times" << endl;


	prbCalc(twoCount);
	printf("Resulted in 2 %d times -- %0.1f%%\n", twoCount, prb);
	//prb = twoCount / (double) ROLLS;
	//prb *= 10;

	prbCalc(threeCount);
	printf("Resulted in 3 %d times -- %0.1f%%\n", threeCount, prb);

	prbCalc(fourCount);
	printf("Resulted in 4 %d times -- %0.1f%%\n", fourCount, prb);

	prbCalc(fiveCount);
	printf("Resulted in 5 %d times -- %0.1f%%\n", fiveCount, prb);

    prbCalc(sixCount);
	printf("Resulted in 6 %d times -- %0.1f%%\n", sixCount, prb);

	prbCalc(sevenCount);
	printf("Resulted in 7 %d times -- %0.1f%%\n", sevenCount, prb);

	prbCalc(eightCount);
	printf("Resulted in 8 %d times -- %0.1f%%\n", eightCount, prb);

	prbCalc(nineCount);
	printf("Resulted in 9 %d times -- %0.1f%%\n", nineCount, prb);

	prbCalc(tenCount);
	printf("Resulted in 10 %d times -- %0.1f%%\n", tenCount, prb);

	prbCalc(elevenCount);
	printf("Resulted in 11 %d times -- %0.1f%%\n", elevenCount, prb);

	prbCalc(twelveCount);
	printf("Resulted in 11 %d times -- %0.1f%%\n", twelveCount, prb);
	
    
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
    
	system("pause");
    return 0;
}
