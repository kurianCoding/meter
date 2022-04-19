#include<iostream>
#define loop(i,N) for(int i=0;i<N;i++)
#define MAX_COL 3
#define MAX_ROW 3
using namespace std;

void draw_table(int a,int b,int table[3][3]){
	loop(i,a){
		cout<<" ";
		loop(j,b){
			if ((j)%4<4 && (j+1)%4>1){
				cout<<"|";
			}
			switch(table[i][j]){
				case 1:
					cout<<"x";
					break;
				case 2:
					cout<<"*";
					break;
				default:
					cout<<0;
			}
		}
		cout<<endl;
		if (i<2){
			loop(k,b) cout<<"--";
			cout<<"-";
		}
		cout<<endl;
	}
}

bool legal(int a, int b,int table[3][3]){
	if (a+1>MAX_ROW||a<0||b+1>MAX_COL||b<0)
		return false;
	if (table[a][b]!=0)
		return false;
	return true;
}

int main(){
	// a function to draw the tictac toe table
	// a logic to decide if a side won
	// a service to randomly assign values to table(play computer)
	int table[3][3];
	loop(i,3)
		loop(j,3) table[i][j]=0;
	loop(i,10){
		int a=0,b=0;
		cin>>a>>b;
		if(legal(a,b,table)){
			if (i%2==0){
				table[a][b]=1;
			}else{
				table[a][b]=2;
			}
			draw_table(3,3,table);
		}else{
			cout<<"illegal move retry"<<endl;
			i--;
		}
	}

	draw_table(3,3,table);
	return 0;
}

