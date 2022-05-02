#include <iostream>

#include "../includes/headers.hpp"
#include "../includes/styles.hpp"


void    instruct() {
    system("clear");
    int x = 40;
    int y = 5;

    std::cout << BOLDBLUE << UNDERLINED;
    gotoxy(75, 3);
    std::cout << "How To Play This Tetris®?" << RESET;

    std::cout << MAGENTA << ITALIC;
    gotoxy(x, y);
    std::cout << "There are 7 tetrominoes, which are dropping in random order";
    gotoxy(x, y+3);
    std::cout << "Arrow UP or W:  rotate";
    gotoxy(x, y+6);
    std::cout << "Arrow DOWN arrow or S:  speed falling piece";
    gotoxy(x, y+9);
    std::cout << "Arrow LEFT or A: going left";
    gotoxy(x, y+12);
    std::cout << "Arrow RIGHT or D: going right";
    gotoxy(x, y+15);
    std::cout << "ENTER: choose" << RESET;

    
    std::cout << YELLOW << BLINK;
    gotoxy(x, y+18);
    std::cout << "Press F to go back to Menu...\n" << RESET;
    gotoxy(1, 90);

    while(true) {
        const char key = keypress();
        if(key == 'f' || key == 'F') {
            system("clear");
            return;
        }
    }

}
