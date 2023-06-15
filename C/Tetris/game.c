// 俄罗斯方块
// Neoxy
// 2023.6.15 22:15

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

#define KEY_RIGHT 100	//A
#define KEY_LEFT 97		//D
#define KEY_UP 119		//W
#define KEY_DOWN 115	//S
#define KEY_ESC 21		//ESC

#define WIN_WIDTH 30
#define WIN_HEIGHT 30

int keeprun = 1;

int block_pos_x;
int block_pos_y;

int gameloop();
void move_x_plus();
void move_x_left();
void move_y_up();
void move_y_down();
void draw_border();
void clear();

int main() {
	printf("WASD进行移动，ESC退出\n");

	while (keeprun) {
		gameloop();
	}
	return 0;
}

int gameloop() {
	draw_border();

	switch (_getch()) {
		case KEY_RIGHT:
			//TODO
			break;
		case KEY_LEFT:
			//TODO
			break;
		case KEY_UP:
			//TODO
			break;
		case KEY_DOWN:
			//TODO
			break;
		case KEY_ESC:
			keeprun = 0;
			break;
	}
	clear();

}
void move_x_right() {
	block_pos_x += 1;
}
void move_x_left() {
	block_pos_x -= 1;
}
void move_y_up() {
	block_pos_y += 1;
}
void move_y_down() {
	block_pos_y -= 1;
}
void clear() {
	system("cls");
}
void draw_border() {
	int i = 0;
	int i2 = 0;

	for (i = 0; i <= WIN_HEIGHT; i++) {
		for (i2 = 0; i2 <= (WIN_WIDTH - 1); i2++) {
			printf(" ");
		}
		printf("|\n");
	}

	for (i = 0; i <= WIN_WIDTH; i++) {
		printf("=");
	}
}
