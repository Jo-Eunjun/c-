#pragma once //매크로인데 지우면안됨
#include<stdio.h>
#include<Stdlib.h>
#include<Windows.h>
#define ROW 3
#define COL 3

void draw_board(int(*p)[3]);
void computer1(int(*p)[3]);
void human(int(*p)[3]);
void endCheck(int(*p)[3]);

