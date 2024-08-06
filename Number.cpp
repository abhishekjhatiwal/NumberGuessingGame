/*
Create a program that generates a random number and asks the
user to guess it. Provide feedback on whether the guess is too
high or too low until the user guesses the correct number.
*/
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
    srand((unsigned int)time(NULL));
    int number = (rand() %100) +1;
    int guess = 0;
    int tries = 0;
    cout<<"========================Number Guessing Game================================"<<endl;
    do
    {
        cout<<"Enter Guess (1-100) : ";
        cin>>guess;
        if (guess > number)
        {
            cout<<"Guess lower! "<<endl;
        }
        else if (guess < number)
        {
            cout<<"Guess higher! "<<endl;
        }
        else
        {
            cout<<"You Won! in "<<tries<<" tries"<<endl;
        }
        tries++;        
    } while (guess != number);
    
}