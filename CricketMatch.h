#ifndef CRICKETMATCH_H
#define CRICKETMATCH_H
#include <iostream>
using namespace std;
class Teams{
    string TeamName;
    int PlayersOut;
    int Score;
    friend class Player;
    friend class Match;
public:
    Teams(string);
    void DisplayScore();
};
class Player{
    int Runs;
    float BallsPlayed;
    bool Out;
public:
    int getRuns();
    bool getOut();
    float Calculate_RunRate();
    Player();
    void Bat(Teams*);//Generate Random Score UNTIL PLAYER IS NOT OUT. Checks if Scores is 0-6, If 0-6 Add Scores to Team and to Player,
// If 7 increments PlayersOut in Team 
};
class Match{
public:
    int toss();
    void Result(Player[3],Player[3],Teams,Teams);//Show RunRate for Each Player,Man of the Match,Who Won?
};
#endif