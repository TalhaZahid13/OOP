// Tab Task 7-4-23.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include<string.h>
// custom header file add
#include "player.h"
#include "allrounder.h"
#include "batsman.h"
#include "bowler.h"
#include "wicketkeeper.h"
using namespace std;
int main()
{
    // object for allrounder class
    player p1;
    cout << "ENTER PLAYER NAME : ";
    cin >> p1.name;
    cout << "ENTER JERSY NO : ";
    cin >> p1.jersyno;
    cout << "ENTER T20 RATING : ";
    cin >> p1.rating[0];
    cout << "ENTER ODI RATING : ";
    cin >> p1.rating[1];
    cout << "ENTER TEST RATING : ";
    cin >> p1.rating[2];
    cout << "SELECT PLAYER CATEGORY : \n (1)BATSMAN \n (2)BOWLER \n (3)ALL ROUNDER \n (4)WICKET KEEPER ";
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        cout << "YOU HAVE SELECTED BATSMAN : ";
        cout << "ENTER RUNS OF BATSMAN : ";
        cin >> p1.runs;
        cout << "ENTER WICKETS TAKEN BY BATSMAN : ";
        cin >> p1.wick;
        if (p1.wick==0)
        {
            cout << "IT IS ONLY A BATSMAN";
        }
        break;
    }
    case 2:
    {
        cout << "YOU HAVE SELECTED BOWLER : ";
        cout << "ENTER RUNS OF BATSMAN : ";
        cin >> p1.runs;
        cout << "ENTER WICKETS TAKEN BY BATSMAN : ";
        cin >> p1.wick;
        if (p1.runs == 0)
        {
            cout << "IT IS ONLY A BOWLER";
        }
        break;
    }
    case 3:
    {
        cout << "YOU HAVE SELECTED ALL ROUNDER : ";
        cout << "ENTER RUNS : ";
        cin >> p1.runs;
        cout << "ENTER WICKETS TAKEN : ";
        cin >> p1.wick;
        if (p1.wick == 0)
        {
            cout << " THIS PLAYER ONLY BOWLS : ";
        }
        else if (p1.runs == 0)
        {
             cout << "THIS PLAYER ONLY BATS : ";
        }
        break;
    }
    case 4:
    {
        cout << "YOU HAVE SELECTED WICKET KEPPER : ";
        cout << "ENTER RUNS : ";
        cin >> p1.runs;
        cout << "ENTER STUMPS DONE : ";
        cin >> p1.stumps;
        break;
    }
    default:
        break;
    }
    cout << p1.jersyno << "\t" << p1.name << "\t" << p1.rating[0] << "\t" << p1.runs << "\t" << p1.rating[1] << "\t" << p1.rating[2] << "\t" << p1.wick;
    cout << p1.runs << "\t" << p1.stumps;
    cout << endl << endl;
    // object for player class
    batsman b1;
    cout << "ENTER PLAYER NAME : ";
    cin >> b1.name;
    cout << "ENTER JERSY NO : ";
    cin >> b1.jersyno;
    cout << "ENTER T20 RATING : ";
    cin >> b1.rating[0];
    cout << "ENTER ODI RATING : ";
    cin >> b1.rating[1];
    cout << "ENTER TEST RATING : ";
    cin >> b1.rating[2];
    cout <<" ENTER RUNS SCORED BY BATSMAN : ";
    cin >> b1.runs;
    cout << b1.jersyno << "\t" << b1.name << "\t" << b1.rating[0] << "\t" << b1.runs << "\t" << b1.rating[1] << "\t" << b1.rating[2];
    cout << endl << endl;
    bowler o1;
    batsman b1;
    cout << "ENTER PLAYER NAME : ";
    cin >> o1.name;
    cout << "ENTER JERSY NO : ";
    cin >> o1.jersyno;
    cout << "ENTER T20 RATING : ";
    cin >> o1.rating[0];
    cout << "ENTER ODI RATING : ";
    cin >> o1.rating[1];
    cout << "ENTER TEST RATING : ";
    cin >> o1.rating[2];
    cout << " ENTER WICKETS SCORED BY BOWLER : ";
    cin >> o1.wickets;
    cout << o1.jersyno << "\t" << o1.name << "\t" << o1.rating[0] << "\t" << o1.wickets << "\t" << o1.rating[1] << "\t" << o1.rating[2];
    cout << endl << endl;
    wicketkeeper w1;
    cout << "ENTER PLAYER NAME : ";
    cin >> w1.name;
    cout << "ENTER JERSY NO : ";
    cin >> w1.jersyno;
    cout << "ENTER T20 RATING : ";
    cin >> w1.rating[0];
    cout << "ENTER ODI RATING : ";
    cin >> w1.rating[1];
    cout << "ENTER TEST RATING : ";
    cin >> w1.rating[2];
    cout << " ENTER STUMPTS DONE BY KEEPER : ";
    cin >> w1.stumps;
    cout << o1.jersyno << "\t" << o1.name << "\t" << o1.rating[0] << "\t" << o1.wickets << "\t" << o1.rating[1] << "\t" << o1.rating[2];
    cout << endl << endl;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
