#include "myhead.h"
int main(void) {
	system("mode con: cols=100 lines=40");

	int board[ROW][COL] = { 0, };


	//draw_board(board); //void draw_board(int(*p)[3]), 배열 포인터 <<포인터를 괄호로묶으고, 뒤에 열의값을 입력하고 접근

	while (1) {
		printf("==*컴퓨터 착수*==\n");
		computer1(board); //void computer(int(*p)[3])
		draw_board(board);
		//컴퓨터종료
		endCheck(board);// void endCheck(int(*p)[3]);

		printf("==@사람 착수@==\n");
		human(board); //void human(int(*p)[3]);
		draw_board(board);
		// 사람종료
		endCheck(board);
		
		system("pause");
		system("cls");
	}

	return 0;
}
