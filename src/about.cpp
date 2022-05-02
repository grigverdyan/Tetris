#include <iostream>

#include "../includes/styles.hpp"
#include "../includes/headers.hpp"


void    aboutGame() {
    system("clear");
    int x = 40;
    int y = 5; 
    
    std::cout << BOLDBLUE << UNDERLINED;
    gotoxy(75, 3);
    std::cout << "Who Created Tetris®?" << RESET;

    std::cout << MAGENTA << ITALIC;
    gotoxy(x, y);
    std::cout << "  In 1984, Tetris® was born from the imagination of computer programmer Alexey Pajitnov. Inspired by";
    gotoxy(x, y+1);
    std::cout << "his favorite puzzle board game, Pentominos, Pajitnov created an electronic game that let players";
    gotoxy(x, y+2);
    std::cout << "arrange puzzle pieces in real time as they fell from the top of the playing field. The resulting design was";
    gotoxy(x, y+3);
    std::cout << "a game that used seven distinctive geometric playing pieces, each made up of four squares. Pajitnov";
    gotoxy(x, y+4);
    std::cout << "called this game “Tetris,” a combination of “tetra” (the Greek word meaning “four”) and “tennis” (his";
    gotoxy(x, y+5);
    std::cout << "favorite sport).";

    std:: cout << BOLDRED << UNDERLINED;
    gotoxy(75, y+8);
    std::cout << "The Tetris® Effect" << RESET;
    
    std::cout << MAGENTA << ITALIC;
    gotoxy(x, y+10);
    std::cout << "  The Tetris® Effect is a catchy term that players use to describe the way they are inspired by the game";
    gotoxy(x, y+11);
    std::cout << "and see Tetriminos in everyday situations. Because Tetris, like the real world, challenges players to make";
    gotoxy(x, y+12);
    std::cout << "order out of chaos using a specific organization system, the game components translate easily into";
    gotoxy(x, y+13);
    std::cout << "lifestyle interpretations. Whether you're packing the trunk of your car, loading a dishwasher, or";
    gotoxy(x, y+14);
    std::cout << "organizing your shelves, you're likely thinking about how each object will fit together strategically with";
    gotoxy(x, y+15);
    std::cout << "minimal empty space. This is the Tetris Effect!";

    std::cout << GREEN << BOLD;
    gotoxy(113, y+19);
    std::cout << "Code® written by Grigori Verdyan";
    gotoxy(x, y+23);
    std::cout << YELLOW << BLINK;
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
