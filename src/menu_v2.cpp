#include "../includes/headers.hpp"
#include "../includes/styles.hpp"
#include <unistd.h>
#include <iostream>
#include <stdio.h>

const char UP = 65;
const char DOWN = 66;
const char RIGHT = 67;
const char LEFT = 68;
const char ENTER = 10;

void	printSelected(char *str) {
    int i;
    i = 0;
    while (str[i]) {
	    std::cout << GREEN << UNDERLINED << BOLD;
        std::cout << str[i++];
    }
    std::cout << RESET;
}

void    print(char *str) {
    int i;
    i = 0;
    while (str[i]) {
		std::cout << CYAN;
        std::cout << str[i++];
    }
    std::cout << RESET;
}

void    menu() {
	char play[] = "PLAY";
	char records[] = "RECORDS";
	char instructions[] = "INSTRUCTIONS";
	char about[] = "ABOUT TETRIS";
	char exit[] = "EXIT";
	int selected = 1;
    int pressed = false;
	int z = 0;
	system("clear");
//    cbreak();
//    normal();
    printTetris(0, z);

	gotoxy(87, 25);
	printSelected(play);
	gotoxy(86, 26);
	print(records);
	gotoxy(84, 27);
	print(instructions);
	gotoxy(84, 28);
	print(about);
	gotoxy(87,29);
	print(exit);
	cbreak();
	while(true) {
		const char key = keypress();
		switch(key) {
			case 'w': case 'W': case UP:
				if(selected == 1) {
					system("clear");
                    printTetris(0, z);
					gotoxy(87, 25);
					print(play);
					gotoxy(86, 26);
					print(records);
					gotoxy(84, 27);
					print(instructions);
					gotoxy(84, 28);
					print(about);
					gotoxy(87,29);
					printSelected(exit);
					selected = 5;
               //     break;
				} else if(selected == 2) {
					system("clear");
                    printTetris(0, z);	
					gotoxy(87, 25);
					printSelected(play);
					gotoxy(86, 26);
					print(records);
					gotoxy(84, 27);
					print(instructions);
					gotoxy(84, 28);
					print(about);
					gotoxy(87,29);
					print(exit);
					selected = 1;
                 //   break;
				} else if(selected == 3) {
					system("clear");
                    printTetris(0, z);	
					gotoxy(87, 25);
					print(play);
					gotoxy(86, 26);
					printSelected(records);
					gotoxy(84, 27);
					print(instructions);
					gotoxy(84, 28);
					print(about);
					gotoxy(87,29);
					print(exit);
					selected = 2;
                   // break;
				} else if(selected == 4) {
					system("clear");
                    printTetris(0, z);	
					gotoxy(87, 25);
					print(play);
					gotoxy(86, 26);
					print(records);
					gotoxy(84, 27);
					printSelected(instructions);
					gotoxy(84, 28);
					print(about);
					gotoxy(87,29);
					print(exit);
					selected = 3;
//                    break;
				} else if(selected == 5) {
					system("clear");
                    printTetris(0, z);	
					gotoxy(87, 25);
					print(play);
					gotoxy(86, 26);
					print(records);
					gotoxy(84, 27);
					print(instructions);
					gotoxy(84, 28);
					printSelected(about);
					gotoxy(87,29);
					print(exit);
					selected = 4;
  //                  break;
				}
				break;
			case 's': case 'S': case DOWN:
				if(selected == 1) {	
					system("clear");
                    printTetris(0, z);
					gotoxy(87, 25);
					print(play);
					gotoxy(86, 26);
					printSelected(records);
					gotoxy(84, 27);
					print(instructions);
					gotoxy(84, 28);
					print(about);
					gotoxy(87,29);
					print(exit);
					selected = 2;
    //                break;
				} else if(selected == 2) {
					system("clear");
                    printTetris(0, z);
					gotoxy(87, 25);
					print(play);
					gotoxy(86, 26);
					print(records);
					gotoxy(84, 27);
					printSelected(instructions);
					gotoxy(84, 28);
					print(about);
					gotoxy(87,29);
					print(exit);
					selected = 3;
      //              break;
				} else if(selected == 3) {
					system("clear");
                    printTetris(0, z);
					gotoxy(87, 25);
					print(play);
					gotoxy(86, 26);
					print(records);
					gotoxy(84, 27);
					print(instructions);
					gotoxy(84, 28);
					printSelected(about);
					gotoxy(87,29);
					print(exit);
					selected = 4;
        //            break;
				} else if(selected == 4) {
					system("clear");
                    printTetris(0, z);
					gotoxy(87, 25);
					print(play);
					gotoxy(86, 26);
					print(records);
					gotoxy(84, 27);
					print(instructions);
					gotoxy(84, 28);
					print(about);
					gotoxy(87,29);
					printSelected(exit);
					selected = 5;
          //          break;
				} else if(selected == 5) {
					system("clear");
                    printTetris(0, z);
					gotoxy(87, 25);
					printSelected(play);
					gotoxy(86, 26);
					print(records);
					gotoxy(84, 27);
					print(instructions);
					gotoxy(84, 28);
					print(about);
					gotoxy(87,29);
					print(exit);
					selected = 1;
        //            break;
				}
				break;
			case ENTER:
				if(selected == 1) {
                    gameOver(); 
				} else if(selected == 2) {
				
				} else if(selected == 3) {
				    instruct();
				} else if(selected == 4) {
					aboutGame();
				} else if(selected == 5) {
					printExit();
					goto EXIT;
				}
				break;
		}
	}
EXIT: 
    gotoxy(1, 50);
	std::cout << "\n";
	normal();
}
