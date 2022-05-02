#include "../includes/headers.hpp"
#include "../includes/styles.hpp"
#include <unistd.h>
#include <iostream>
#include <stdio.h>

const char UP = 65;
const char DOWN = 66;
const char ENTER = 10;

void    printSectionName(char *str, bool isSelected) {
    int i = 0;
    while (str[i]) {
        if(isSelected) {
            std::cout << GREEN << UNDERLINED << BOLD;
        } else {
            std::cout << WHITE;
        }
        std::cout << str[i++];
    }
    std::cout << RESET;
}

void    printAll(int selected) {
    char play[] = "PLAY";
    char records[] = "RECORDS";
    char instructions[] = "INSTRUCTIONS";
    char about[] = "ABOUT TETRIS";
    char exit[] = "EXIT";
    int z = 0;
    
    switch(selected) {
        case 1:
            system("clear");
            fallingTetris(0, z);
            gotoxy(87, 25);
            printSectionName(play, 1);
            gotoxy(86, 26);
            printSectionName(records, 0);
            gotoxy(84, 27);
            printSectionName(instructions, 0);
            gotoxy(84, 28);
            printSectionName(about, 0);
            gotoxy(87,29);
            printSectionName(exit, 0);
            break;
        case 2:
            system("clear");
            fallingTetris(0, z);
            gotoxy(87, 25);
            printSectionName(play, 0);
            gotoxy(86, 26);
            printSectionName(records, 1);
            gotoxy(84, 27);
            printSectionName(instructions, 0);
            gotoxy(84, 28);
            printSectionName(about, 0);
            gotoxy(87,29);
            printSectionName(exit, 0);
            break;
        case 3:
            system("clear");
            fallingTetris(0, z);    
            gotoxy(87, 25);
            printSectionName(play, 0);
            gotoxy(86, 26);
            printSectionName(records, 0);
            gotoxy(84, 27);
            printSectionName(instructions, 1);
            gotoxy(84, 28);
            printSectionName(about, 0);
            gotoxy(87,29);
            printSectionName(exit, 0);
            break;
        case 4:
            system("clear");
            fallingTetris(0, z);
            gotoxy(87, 25);
            printSectionName(play, 0);
            gotoxy(86, 26);
            printSectionName(records, 0);
            gotoxy(84, 27);
            printSectionName(instructions, 0);
            gotoxy(84, 28);
            printSectionName(about, 1);
            gotoxy(87,29);
            printSectionName(exit, 0);
            break;
        case 5:
            system("clear");
            fallingTetris(0, z);
            gotoxy(87, 25);
            printSectionName(play, 0);
            gotoxy(86, 26);
            printSectionName(records, 0);
            gotoxy(84, 27);
            printSectionName(instructions, 0);
            gotoxy(84, 28);
            printSectionName(about, 0);
            gotoxy(87,29);
            printSectionName(exit, 1);
            break;
    }
}

void    menu() {
    system("clear");
    int z = 0;
    fallingTetris(1, z);
    int selected = 1;
    printAll(selected);

    bool inMenu = true;
    bool keyChanged;
    cbreak(); 
    while(inMenu) {
        keyChanged = false;
        const char key = keypress();
//        if(key == UP) {
        switch(key) {
            case UP:
                keyChanged = true;
                if(selected == 1) {
                    // Section PLAY is active
                    selected = 5;
                    printAll(selected);
                    keyChanged = false;
                } else if(selected == 2) {
                    // Section RECORDS is active
                    selected = 1;
                    printAll(selected);
                    keyChanged = false;
                } else if(selected == 3) {
                    // Section INSTRUCTIONS is active
                    selected = 2;
                    printAll(selected);
                    keyChanged = false;
                } else if(selected == 4) {
                    // Section ABOUT is active
                    selected = 3;
                    printAll(selected);
                    keyChanged = false;
                } else if(selected == 5) {
                    // Section EXIT is active
                    selected = 4;
                    printAll(selected);
                    keyChanged = false;
                }
                break;
//        } 
/*
        if(keyChanged) {
            system("clear");
            fallingTetris(0, z);
            printAll(selected);
            keyChanged = false;
        }
*/
//        if(key == DOWN) {
            case DOWN:
                keyChanged = true;
                if(selected == 1) {
                    // Section Plat is active
                    selected = 2;
                    printAll(selected);
                    keyChanged = false;
                } else if(selected == 2) {
                    // Section RECORDS is active
                    selected = 3;
                    printAll(selected);
                    keyChanged = false;
                } else if(selected == 3) {
                    // Section INSTRUCTIONS is active
                    selected = 4;
//                    system("clear");
//                    fallingTetris(0, z);
                    printAll(selected);
                    keyChanged = false;
                } else if(selected == 4) {
                    // Section ABOUT is active
                    selected = 5;
//                    system("clear");
//                    fallingTetris(0, z);
                    printAll(selected);
                    keyChanged = false;
                } else if(selected == 5) {
                    // Section EXIT is active
                    selected = 1;
                    printAll(selected);
                    keyChanged = false;
                }
                break;
//        }
/*
        if(keyChanged) {
            system("clear");
            fallingTetris(0, z);
            printAll(selected);
            keyChanged = false;
        } */
//        if(key == ENTER) {
            case ENTER:  
                if(selected == 1) {
                    system("clear");
                    std::cout << selected << "play";
                } else if(selected == 2) {
                    std::cout << selected << "records";
                } else if(selected == 3) {
                    std::cout << selected << "instructions";
                    system("clear");
                    instruct();
                } else if(selected == 4) {
                    std::cout << selected << "about";
                    system("clear");
                    aboutGame();
                } else if(selected == 5) {
                    std::cout << selected << "exit";
                    system("clear");
                    inMenu = false;
                    printExit();
            }
        }
    }
    gotoxy(1, 50);
    std::cout << std::endl;
    normal();
}

int main() {
    menu();
}
