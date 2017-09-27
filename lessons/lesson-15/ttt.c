#include <stdio.h>

int main() {
	char ttt[9] = {'0','1','2','3','4','5','6','7','8'};
	int move=0;
	char player='A';
	while(move < 9) {
		printf("%c  %c  %c\n",ttt[0],ttt[1],ttt[2]);
		printf("%c  %c  %c\n",ttt[3],ttt[4],ttt[5]);
		printf("%c  %c  %c\n",ttt[6],ttt[7],ttt[8]);
		printf("Enter move for player %c ",player);
		scanf("%d",&move); //move is 0 to 8
		if(move < 9) 
			ttt[move]=player;
		if(player == 'A')
			player = 'B';
		else
			player = 'A';
	}
	return 0;
}
