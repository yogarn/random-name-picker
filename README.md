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
piece of code above is basically asking user for how many name that will be inputed to the spinner. the input that user give will be stored in ```maxUsers``` and used for looping.
inside that looping, user will be asked for each name that want to be spinned. this step is important because it will help the programs to display the spinned name instead of bunch of random number.
