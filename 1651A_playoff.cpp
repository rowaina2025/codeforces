/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <queue>
using namespace std;

int main()
{
  queue<pair<int,int>> players;
  int number;
  cin >> number;
  int first,second;
  for(int i = 1; i <= number/2; i++){
        cin >> first >> second;
        players.push(make_pair(first,second));
  }
  
  queue<int> winner;
  while(players.size() != 0){
      int size = players.size();
      for(int i = 0; i< size; i++){ //check each pair of players in the queue
          if((players.front().first + players.front().second) % 2 == 0){ //even --> select the higher index
              if(players.front().first > players.front().second){
                  winner.push(players.front().first);
                  if(players.size() == 1)
                       break;
                  players.pop();
                  
              }
              else if(players.front().first < players.front().second){
                  winner.push(players.front().second);
                  if(players.size() == 1)
                       break;
                  players.pop();
              }
          }
          else{   //odd --> seect the lower index then pop
              if(players.front().first < players.front().second){
                  winner.push(players.front().first);
                  if(players.size() == 1)
                       break;
                  players.pop();
              }
              else if(players.front().first > second){
                  winner.push(players.front().second);
                  if(players.size() == 1)
                       break;
                  players.pop();
              }
          }
          if(i % 2 == 1){  // the new competetors 
              int one = winner.front();
              winner.pop();
              int two = winner.front();
              winner.pop();
              players.push(make_pair(one,two));
          }
      }
      if(players.size() == 1){
          
          if((players.front().first + players.front().second) % 2 == 0){ //even --> select the higher index
              if(players.front().first > players.front().second){
                  cout << players.front().first;
                  players.pop();
              }
              else if(players.front().first < players.front().second){
                  cout << players.front().second;
                  players.pop();
              }
          }
          else{   //odd --> seect the lower index then pop
              if(players.front().first < players.front().second){
                  cout << players.front().first;
                  players.pop();
              }
              else if(players.front().first > second){
                  cout << players.front().second;
                  players.pop();
              }
          }
      }
  }
}
