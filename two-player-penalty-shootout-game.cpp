#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
	int player1score=0;
	int player2score=0;
	for(int round=1;round<=5;round++){
		int row,column;
		int goal[2][3]={{0,0,0},{0,0,0}};
		cout<<"---------""ROUND "<<round<<"---------"<<endl;
		cout<<"Player 1(shooter)-Enter row(0-1) and column(0-2):";
		cin>>row>>column;
		system("cls");
		goal[row][column]=1;
		cout<<"Player 2(goalkeeper)-Enter row(0-1) and column(0-2):";
		cin>>row>>column;
		if(goal[row][column]==1){
			cout<<"Saved! The goalkeeper stopped the ball."<<endl;
		}else{
			cout<<"Goal!"<<endl;
			player1score++;
		}cout<<"SCORE:"<<"PLAYER 1 "<<player1score<<"-"<<player2score<<" PLAYER 2"<<endl;
		cout<<"--------------------------------------------"<<"\n\n\n\n\n\n\n\n\n";
		
		int goal2[2][3]={{0,0,0},{0,0,0}};
		cout<<"Player 2(shooter)-Enter row(0-1) and column(0-2):";
		cin>>row>>column;
		system("cls");
		goal[row][column]=1;
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"Player 1(goalkeeper)-Enter row(0-1) and column(0-2):";
		cin>>row>>column;
		if(goal[row][column]==1){
			cout<<"Saved! The goalkeeper stopped the ball."<<endl;
		}else{
			cout<<"Goal!"<<endl;
			player2score++;
		}cout<<"SCORE:"<<"PLAYER 1 "<<player1score<<"-"<<player2score<<" PLAYER 2"<<endl;
		cout<<"--------------------------------------------"<<"\n\n\n\n\n\n\n\n\n";
		
	}cout<<"Game Over"<<endl;
	if(player1score>player2score){
		cout<<"WINNER: Player 1";
	}else if(player2score>player1score){
		cout<<"WINNER: Player 2";
	}else{
		cout<<"Draw";
	}
	return 0;
}
