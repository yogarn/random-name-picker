# random-name-picker
pick a random name from user input using ```rand()``` and ```srand()``` in c++

## how does this work?
this program is working by simply getting user input for user name that will be spinned, each name that will be spinned, and the number of results that want to be displayed.
```
    cin >> maxUsers;
    maxUsers = maxUsers--;
    string users[maxUsers];
    for (int i = 0; i < maxUsers; i++) {
        cin >> users[i];
    }
```
the pieces of code above is basically asking user for how many name that will be inputed to the spinner. the input that user give will be stored in ```maxUsers``` and used for a loop.
inside that loop, user will be asked for each name that want to be spinned. this step is important because it will help the programs to display the spinned name instead of bunch of random number. that code is also used to make an array consist of name that will be spinned.

```
    cin >> maxRandom;
    if (maxRandom > 1) {
        cout << "Well, here is top " << maxRandom << " name in my list : " << endl;
        for (int j = 0; j < maxRandom; j++) {
            randomCounter = j + 1;
            cout << randomCounter << ". " << users[getRandom(maxRandom, maxUsers)] << endl;
        }
        cout << endl;
    } else {
        cout << "It's " << users[getRandom(maxRandom, maxUsers)] << "!" << endl;
    }
```
after getting each name that will be spinned, program will asking user for the maximum result that user will get. this step is also important to decide whether user want a multiple result or just a single result. after all of those input has been fulfilled, the program will start to generate random number that will be used to define the result.
```
int getRandom(int maxRandom, int maxUsers) {
    int randomNumber = rand() % maxUsers;
    return randomNumber;
}
```
to run this program, simply compile ```main.cpp``` and run the executable file.
