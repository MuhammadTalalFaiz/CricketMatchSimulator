#include <iostream>
#include "CricketMatch.h"
#include <time.h>
using namespace std;

int main(){
    srand(time(NULL));
    Match Match1;
    Player YouBatter[3];
    Player ComputerBatters[3];
    Teams You("You");
    Teams Computer("Computer");
    if(Match1.toss()>5){
        int balls1=0;
    int balls2=0;
        int i,j;
        cout<<"You are First"<<endl;
        for(i=0;i<3;i++){
            while ((YouBatter[i].getOut()==false)&&(balls1<6)) {
                YouBatter[i].Bat(&You);
                balls1++;
            }
    }
    You.DisplayScore();  
     for(j=0;j<3;j++){
            while((ComputerBatters[j].getOut()==false)&&(balls2<6)) {
                ComputerBatters[j].Bat(&Computer);
                balls2++;
            }
    } 
    Computer.DisplayScore();
    Match1.Result(YouBatter,ComputerBatters,Computer,You);
    }
    
    else{
        int balls1=0;
    int balls2=0;
        int i,j;
        cout<<"Computer is First"<<endl;
        for(i=0;i<3;i++){
            while ((ComputerBatters[i].getOut()==false)&&(balls1<6)) {
                ComputerBatters[i].Bat(&Computer);
                balls1++;
            }
    }
    Computer.DisplayScore();
      for(j=0;j<3;j++){
            while ((YouBatter[j].getOut()==false)&&(balls2<6)) {
                YouBatter[j].Bat(&You);
                balls2++;
            }
    } 
    You.DisplayScore();
    Match1.Result(YouBatter,ComputerBatters,Computer,You);
    }
    return 0;
}