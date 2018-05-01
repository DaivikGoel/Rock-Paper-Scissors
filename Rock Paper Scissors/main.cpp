//
//  main.cpp
//  Rock Paper Scissors
//
//  Created by Daivik Goel on 2018-05-01.
//  Copyright © 2018 Daivik Goel. All rights reserved.
//

#include <iostream>
using namespace std;

int p = 0;
int s = 0;
int r = 0;

void program (int human ){
    
    int num = rand() % 10;
    
    // Rock
    if( num <= 3){
        cout << "ROCK"<< endl;
        if(human == r ){
            cout<< "DRAW" <<endl;
        }
        else if( human == s){
            cout<< "YOU LOSE" <<endl;
        }
        else if(human == p){
            cout<<"YOU WIN"<<endl;
        }
        else{
        cout<< "Invalid Input";
    }
    }
// Paper
        if( num > 3 && num <= 7){
            cout << "PAPER"<< endl;
            if(human == r ){
                cout<< "YOU LOSE" <<endl;
            }
            else if( human == s){
                cout<< "YOU WIN" <<endl;
            }
            else if(human == p){
                cout<<"DRAW"<<endl;
            }
            else{
                cout<< "Invalid Input";
            }
    }
    // Scissors
    if( num > 7){
        cout << "SCISSORS"<< endl;
        if(human == r ){
            cout<< "YOU WIN" <<endl;
        }
        else if( human == s){
            cout<< "DRAW" <<endl;
        }
        else if(human == p){
            cout<<"YOU LOSE"<<endl;
        }
        else{
            cout<< "Invalid Input";
        }
    
}
}

void probability( int human ){

    if( human == p ){
        p++;
    }
    else if( human == r ){
        r++;
}
    else if (human == s){
        s++;
    }
    else {
        cout<< "Invalid Input";
    }
}
int main( ) {
    int human;
    cout<< " Type r for Rock,p for paper, or s for scissors"<<endl;
    cin >> human;
    probability(human);
    program(human);
}
