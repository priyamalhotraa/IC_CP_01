#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main(){
    int difficulty;
    int maxAttempts;
    int userGuess;
    int attemptsUsed=0;
    int previousGuesses[10]; //array for storing previous guesses

    cout<<"Select Difficulty Level\n";
    cout<<"1.Easy (10 attempts)\n";
    cout<<"2.Medium (7 attempts)\n";
    cout<<"3.Hard (5 attempts)\n";
    cout<<"Choose Difficulty Level (1,2 or 3): ";
    cin>>difficulty;

    if(difficulty==1){
        maxAttempts=10;
    }
    else if(difficulty==2){
        maxAttempts=7;
    }
    else if(difficulty==3){
        maxAttempts=5;
    }
    srand(time(0));
    int randomnumber=(rand()%(100-1)+1);

    cout<<"\nGuess the number between 1 and 100\n";

    while(attemptsUsed<maxAttempts){
        cout<<"Enter your guess: ";
        cin>>userGuess;

        previousGuesses[attemptsUsed]=userGuess;
        attemptsUsed++;

        if(userGuess>randomnumber) cout<<"Too High!";
        else if(userGuess<randomnumber) cout<<"Too Low!";
        else{
            cout<<"Congratulations!! You guessed it correctly.\n";
            cout<<"Attempts Used: "<<attemptsUsed;
            return 0;
        }
        cout<<"\nGuesses left: "<<maxAttempts-attemptsUsed<<endl;
        cout << "Previous Guesses: ";
        for (int i=0;i<attemptsUsed;i++){
            cout<<previousGuesses[i]<<" ";
        }
        cout<<endl;
    }
    cout<<"\n Game Over!";
    cout<<"\nThe correct number was: "<<randomnumber;
    return 0;
}

    
