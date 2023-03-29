#include "myhead.h"
void human(int(*p)[3]) {
	int i=0,j=0,r = 0, c = 0;
	printf("행번호 입력 : ");
	scanf("%d", &r);

	printf("열번호 입력 : ");
	scanf("%d", &c);
	int count = 0;
	if ((p[r][c] != 2) && (p[r][c] != 1)) {
		p[r][c] = 2;

	}
	else {
		count--;
		printf("다시 입력해주세요.\n");
	}
		
	
	
	/*for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if (p[i][j] == p[r][c]) {
				break;
			}
		}
	}*/
	
}
