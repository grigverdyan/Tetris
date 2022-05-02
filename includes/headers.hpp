#ifndef HEADERS_H
#define HEADERS_H

/*
    Brief: Sets up terminal for one-char-at-a-time reads
*/
void cbreak();

/*
    Brief: Resets terminal to normal state after cbreak()
*/
void normal();

/*
    Brief: Checks keyboard buffer (stdin) and returns the pressed key
    Return: Pressed key or -1
*/
int keypress();

/*
    Brief: Sets (x, y) coordinates to dispay things in the terminal
*/
void	gotoxy(int x, int y);

/*
    Brief: Little beautiful animation in the menu - falling tetromino in the menu
    : Gets boolean variable which sets when start animation, and an integer, which is y coordinate of falling tetromino
*/
void	fallingTetris(bool magic, int &z);

/*
    Brief: Displays word "TETRIS"
    : Gets (x, y) coordinates to print the word
*/
void	printTetris(int x, int y);

/*
    Brief: Displays letter after exitting the game
*/
void	printExit();

/*
    Brief: Displays brief information about game and it's developer :)
*/
void    aboutGame();


/*
    Brief: Displays information about game control
*/
void    instruct();

/*
    Brief: Displays GAME OVER
*/
void    gameOver();

/*
    Brief: Displays Menu sections. If Boolean value is true, section displayed as selected
    : Gets boolean value which defines is section selected or not, and a string, which is section name
*/
void    printSectionName(char *str, bool isSelected);


/*
    Brief: Prints all menu sections
    : Gets Integer which says which section is selected
*/
void    printAll(int selected);

/*
    Brief: Displays interactive menu
*/
void    menu();

/*
    Brief: Getting randomized piece's (x, y) coordinates
    : Gets randome piece's identifier
*/
void    getPiece(int n);

/*
    Brief: Rotating piece, and getting it's rotated (x, y) coordinates
*/
void    rotatePiece();

/*
    Brief: Checking if piece is innside gaming FIELD or not
    Return: returns truthy value if piece is in field, and falsy otherwise
*/
bool check();

/*
    Brief: Inserting new Piece in the gaming FIELD
*/
void    insertPiece();

/*
    Brief: Initializing empty gaming FIELD
*/
void    initEmptyField();

/*
    Brief: Displaying gaming FIELD
*/
void    displayField();

/*
    Brief: Implementing the main logic of game
*/
void    game();

#endif
