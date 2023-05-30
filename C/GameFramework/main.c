#include <stdio.h>
#include <conio.h>

int main() {
	int KEEP_RUN = 1;
	int key;
	while (KEEP_RUN) {
		while (key=_getch()) {
			
			switch (key)
			{
			case 27:
				KEEP_RUN = 0;
				break;
				
			default:
				printf("%d\n", key);
				break;
			}
			break;
		}//W: 119 A:97 S:115 D:100 ESC:27
	}
}
