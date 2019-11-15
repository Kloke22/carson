//Caden Unnasch
//CS1428
//Assignment 5

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

const int NUMCASES = 26;

struct briefcase {
    float dollar;
    int number;
    bool isOpen;
};

void randomizeCases(briefcase briefcases[]);
void displayCases(briefcase briefcases[]);





int main(){
    srand(time(0));
    briefcase briefcases[NUMCASES];
    displayCases(briefcases);
    return 0;
}

void randomizeCases(briefcase briefcases[]) {
    float prices[NUMCASES] = {0.01, 1.0, 5.0, 10.0, 25.0, 50.0, 75.0, 100.0, 200.0, 300.0, 400.0, 500.0, 750.0, 1000.0, 5000.0, 10000.0, 25000.0, 50000.0, 75000.0, 100000.0, 200000.0, 300000.0, 400000.0, 500000.0, 750000.0, 1000000.0};
    for (int i=0; i<NUMCASES; i++) {
        briefcases[i].dollar = prices[rand()%26];
        briefcases[i].isOpen = false;
        if (i % 2 == 0)
            briefcases[i].isOpen = true;
    }
}

void displayCases(briefcase briefcases[]) {
    for (int i=0; i<NUMCASES; i++) {
        if (!briefcases[i].isOpen) {
            cout << "|" << i + 1 << "|";
        }
        else{
            cout << "|" << briefcases[i].dollar << "|";
        }
    }
}
