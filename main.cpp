#include <cstdlib>
#include <iostream>
#include <time.h>
#include <windows.h>

using namespace std;

int getRandom(int maxRandom, int maxUsers) {
    //generate and returning random value under maximum result
    int randomNumber = rand() % maxUsers;
    return randomNumber;
}

int main() {
    int maxUsers, maxRandom, randomCounter;
    //sets srand() seeds
    srand(time(0));
    //get maximum name that will be spinned
    cout << "How many name you want to spin here?" << endl << ">> ";
    cin >> maxUsers;
    //reducing maxUsers by 1, because array start with 0
    maxUsers = maxUsers--;
    //initialize array
    string users[maxUsers];
    //get each name that will be spinned
    cout << "Who are they?" << endl;
    for (int i = 0; i < maxUsers; i++) {
        cout << ">> ";
        cin >> users[i];
    }
    //get maximum result from spinning
    cout << "How many time you want to spin these names?" << endl << ">> ";
    cin >> maxRandom;
    //check if it's multiple result
    if (maxRandom > 1) {
        cout << "Well, here is top " << maxRandom << " name in my list : " << endl;
        //get multiple random value
        for (int j = 0; j < maxRandom; j++) {
            //add 1 to the counter, because array start with 0
            randomCounter = j + 1;
            //print name with random array value
            cout << randomCounter << ". " << users[getRandom(maxRandom, maxUsers)] << endl;
        }
        cout << endl;
    } else {
        //get single random value
        cout << "It's " << users[getRandom(maxRandom, maxUsers)] << "!" << endl;
    }
    return 0;
}