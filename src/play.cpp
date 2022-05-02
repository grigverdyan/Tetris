#include "../includes/headers.hpp"
#include "../includes/styles.hpp"
    
#include <iostream>
#include <stdio.h>

enum keyboard {
//const char UP = 65;
//const char DOWN = 66;
//const char RIGHT = 67;
//const char LEFT = 68;

UP =  65,
DOWN =  66,
RIGHT = 67,
LEFT = 68,

}   

constexpr int width = 30;
constexpr int height = 40;
char FIELD[height][width] = {};
int PIECES[7][4] = {
	1, 3, 5, 7,   // I
	2, 4, 5, 7,   // S
	3, 5, 4, 6,   // Z
	3, 5, 4, 7,   // T
	2, 3, 5, 7,   // L
	3, 5, 7, 6,   // J
	2, 3, 4, 5    // O
};


struct Coord {
	int x;
	int y;
} coords[4];

void	play();
void	initField();
void	fillField();
void	displayField();
void	pieceFunc();
void	emptyPiece(int x, int y);
void	rotatePiece();
bool    check();

int main() {
    system("clear");
	pieceFunc();
    initField();
    fillField();
    displayField();
	int dx = 0;
	bool rotate = false;
//	cbreak();
	while(true) {
       cbreak();
		const char key = keypress();
        switch(key) {
		    case 'w': case 'W': case keyboard.UP:
              //  sleep(1);
                for(int i = 0; i < 4; i++) {
                    coords[i].y += 1;
                } 
                system("clear");
			    rotate = true;
        	    if(rotate) {
                    rotatePiece();
        	    }
                initField();
                fillField();
                play();
        	    if(coords[0].x == 0) {
                    pieceFunc();
                    dx = 0;
                    rotate = false;
        	    }
                displayField();
                break;
		    case 'd': case keyboard.RIGHT:
             //   sleep(1);
                for(int i = 0; i < 4; i++) {
                    coords[i].y += 1;
                } 
                system("clear");
			    dx = 1;
			    for(int i = 0; i < 4; i++) {
                    coords[i].x += dx;
        	    }
        	    if(rotate) {
                    rotatePiece();
        	    }
                initField();
                fillField();
                play();
        	    if(coords[0].x == 0) {
                    pieceFunc();
                    dx = 0;
                    rotate = false;
        	    }
                displayField();
	            break;
		    case 's': case 'S': case keyboard.LEFT:
             //   sleep(1);
                for(int i = 0; i < 4; i++) {
                    coords[i].y += 1;
                } 
                system("clear");
                dx = -1;
			    for(int i = 0; i < 4; i++) {
                	coords[i].x += dx;
        		}
        		if(rotate) {
                	rotatePiece();
        		}
                initField();
                fillField();
                play();
        		if(coords[0].x == 0) {
                	pieceFunc();
                	dx = 0;
                	rotate = false;
        		}
                displayField();
                break;
            default:
                sleep(1);
                for(int i = 0; i < 4; i++) {
                    coords[i].y += 1;
                }
                break;
        }
        normal();
	}
	normal();
}

bool check() {
    for (int i = 0; i < 4; i++)
        if (coords[i].x < 0 || coords[i].x >= width || coords[i].y >= height)
            return 0;
        else if (FIELD[coords[i].y][coords[i].x])
            return 0;

    return 1;
}

void	rotatePiece() {
	Coord c = coords[1];
	for(int i = 0; i < 4; i++) {
		int x = coords[i].y - c.y;
		int y = coords[i].x - c.x;

		coords[i].x = c.x - x;
		coords[i].y = c.y + y;
	}
}

void    play() {
	for(int i = 0; i < height; i++) {
        FIELD[i][0] = 186;      
        FIELD[i][width - 1] = 186;   
        FIELD[height - 1][i] = 186;  
    }

	int p = width / 2;
	for (int i = 0; i < 4; i++) {
		FIELD[coords[i].y][coords[i].x + p] = '+'; 
	}
	

}

void    initField() {
        for(int i = 0; i < height; i++) {
                for(int j = 0; j < width; j++) {
                        FIELD[i][j] = ' ';
                }
        }
}

void    fillField() {
        for(int i = 0; i < height; i++) {
                FIELD[i][0] = 186;	//186
                FIELD[i][width - 1] = 186;   //186
                FIELD[height - 1][i] = 186;  //205

        }
}

void    displayField() {
        for(int i = 0; i < height; i++) {
                for(int j = 0; j < width; j++) {
                        std::cout << RED;
                        std::cout << FIELD[i][j];
                }
                std::cout << std::endl;
        }

}

void	pieceFunc() {
//	int n = rand() % 7;
    int n = 5;
	for(int i = 0; i < 4; i++) {
		coords[i].x = PIECES[n][i] % 2;
		coords[i].y = PIECES[n][i] / 2;
	}
	
}
