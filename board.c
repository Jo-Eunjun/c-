#include<stdio.h>
void draw_board(int(*p)[3]) {
	//printf("-------------\n");
	//for (int i = 0; i < 3; i++) {
	//	printf("| %d | %d | %d |\n",p[i][0], p[i][1],p[i][2]);
	//	printf("-------------\n");
	//}
	printf("┌───┬───┬──┐\n");
	printf("│ %d │ %d │ %d│ \n",p[0][0],p[0][1],p[0][2]);
	printf("├───┼───┼──┤\n");
	printf("│ %d │ %d │ %d│ \n", p[1][0], p[1][1], p[1][2]);
	printf("├───┼───┼──┤\n");
	printf("│ %d │ %d │ %d│ \n", p[2][0], p[2][1], p[2][2]);
	printf("└───┴───┴──┘\n");

	
}
