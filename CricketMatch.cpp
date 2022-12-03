#include "CricketMatch.h"
#include <cstdlib>
#include <time.h>

void Teams::DisplayScore(){
    cout<<"Team Score:"<<Score<<endl;
    cout<<"Players Left:"<<3-PlayersOut<<endl;
}
Teams::Teams(string setName){
    PlayersOut=0;
    Score=0;
    TeamName=setName;
}

////
int Player::getRuns(){
    return Runs;
}
float Player::Calculate_RunRate(){
    float RunR;
    if(BallsPlayed==0){
        return 0;
    }
    else{RunR=Runs/BallsPlayed;
    return RunR;}   
}
bool Player::getOut(){return Out;}
Player::Player(){
    Out=false;
    Runs=0;
    BallsPlayed=0;
    }
void Player::Bat(Teams* Obj){
    int Runscored;
    Runscored=rand()%10;
    this->BallsPlayed++;
    if (Runscored<=6){
        Obj->Score+=Runscored;
        Runs=Runs+Runscored;
    }
    else{
        Out=true;
        Obj->PlayersOut++;
        
    }
    
}




int Match::toss(){
    int x;
    x=rand()%10;
    
    return x;
}
void Match::Result(Player You[3],Player Computer[3],Teams Team1,Teams Team2){
    if (Team1.Score>Team2.Score){
        cout<<"Computer Wins"<<endl;
    }
    else if(Team1.Score<Team2.Score){
        cout<<"You Win"<<endl;
    }
    else if((Team1.Score==Team2.Score)&&(Team1.PlayersOut==Team2.PlayersOut)){
        cout<<"Tie"<<endl;
    }
    //////Run Rate Calculationi
    int k;
    for(k=0;k<3;k++){
        cout<<"Your Players"<<endl;
        cout<<"Player"<<k+1<<" Runrate: "<<You[k].Calculate_RunRate()<<endl;
        cout<<"Computer Players"<<endl;
        cout<<"Player"<<k+1<<" Runrate: "<<Computer[k].Calculate_RunRate()<<endl;
        
    }
    ////// Man of the Match//////
    int i;
     for(i = 1;i < 3; ++i) {
    if(You[0].getRuns()<You[i].getRuns()){
    You[0] = You[i];}
  }
  int j;
   for(j = 1;j < 3; ++j) {

    
    if(Computer[0].getRuns() < Computer[j].getRuns()){
    Computer[0] = Computer[j];}
  }
  if(Computer[0].getRuns()>You[0].getRuns()){
      cout<<"Man of the Match is Computer Player 1"<<endl;
  }
  else{
      cout<<"Man of the Match is You Player 1"<<endl;
  }
    
}