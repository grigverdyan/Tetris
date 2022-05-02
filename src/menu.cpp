#include "../includes/headers.hpp"
#include "../includes/styles.hpp"
#include <unistd.h>
#include <iostream>
#include <stdio.h>

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

	int z = 0;
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
	cbreak();
	while(true) {
	   const char key = keypress();
    	if(key == 65 || key == 'w' || key == 'W') {
			switch(selected) {
				case 1:
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
					gotoxy(87, 29);
					printSelected(exit);
					selected = 5;
                    std::cout << selected;
					break;
				case 2:
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
					gotoxy(87, 29);
					print(exit);
					selected = 1;
				    std::cout << selected;
                	break;
				case 3:
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
                    gotoxy(87, 29);
                    print(exit);
                    selected = 2;
                    std::cout << selected;
					break;
				case 4:
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
					gotoxy(87, 29);
					print(exit);
                    selected = 3;
                     std::cout << selected;
					break;
				case 5:
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
					gotoxy(87, 29);
                    print(exit);
                    selected = 4;
                     std::cout << selected;
                    break;
/*				default:
					system("clear");
             //     cbreak();
                //  normal();
                    printTetris(0, z);
                    gotoxy(87, 25);
                    printSelected(play);
                    gotoxy(86, 26);
                    print(records);
                    gotoxy(84, 27);
                    print(instructions);
                    gotoxy(84, 28);
                    print(about);
                    gotoxy(87, 29);
                    print(exit);
                    selected = 1;
                    break;
*/			}
		}  
		if(key == 66 || key == 's' || key == 'S') {
            gotoxy(120, 0);
            std::cout << selected;
            switch(selected) {
                case 1:
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
				    gotoxy(87, 29);
				    print(exit);
                    selected = 2;
                     std::cout << selected;
    				break;
                case 2:
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
					gotoxy(87, 29);
					print(exit);
                    selected = 3;
                                         std::cout << selected;

					break;
                case 3:
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
					gotoxy(87, 29);
					print(exit);
                    selected = 4;
                     std::cout << selected;
					break;
                case 4:
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
			        gotoxy(87, 29);
                    printSelected(exit);
                    selected = 5;
                     std::cout << selected;
					break;
				case 5:
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
					gotoxy(87, 29);
                    print(exit);
                    selected = 1;
                     std::cout << selected;

                    break;
/*				default:
                    system("clear");
            //      cbreak();
            //      normal();
                    printTetris(0, z);
                    gotoxy(87, 25);
                    printSelected(play);
                    gotoxy(86, 26);
                    print(records);
                    gotoxy(84, 27);
                    print(instructions);
                    gotoxy(84, 28);
                    print(about);
                    gotoxy(87, 29);
                    print(exit);
                    selected = 1;
                    break;
*/			}
        } 
		if(key == 10) {
			switch(selected) {
//				case 1:
					//play
//				case 2:
					//recordings
//				case 3:
					//instructions
				case 4:
                    std::cout << selected;
                //    system("clear");
                    aboutGame();
               //     system("clear");
              //      normal();
            //        cbreak();
                    break;
				case 5:
                    std::cout << selected;
				//	system("claer");
					printExit();
                //    system("clear");
					goto EXIT;
                    break;
                default:
                    break;
			}
		}
	}
EXIT: 
    gotoxy(1, 50);
	std::cout << "\n";
	normal();
}
