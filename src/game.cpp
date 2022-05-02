#include "../includes/headers.hpp"
#include "../includes/styles.hpp"

#include <iostream>
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <chrono>
#include <thread>
using namespace std::chrono;

const char    UP =  65;
const char    DOWN =  66;
const char    RIGHT = 67;
const char    LEFT = 68;

constexpr int width = 25;
constexpr int height = 35;
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
} coordsA[4], coordsB[4];

void    displayField();
void    initEmptyField();
void    rotatePiece();
void    getPiece(int n);
void    insertPiece();
bool    check();
void    goDown();

void game() {
    
    float clk = 600000;
    initEmptyField();
    int dx = 0;
    int colorNum = 1;
    bool rotate = false;
    double timer = 0;
    double delay = 0.3;   
//    std::thread th(goDown);

    cbreak();
    while(true) { 
        usleep(clk);
        timer += clk;
       
        const char key = keypress();
        switch(key) {
            case UP:
                rotate = true;
                break;
            case DOWN:
                delay = 0.5;
                break;
            case RIGHT:
                dx = 1;
                break;
            case LEFT:
                dx = -1;
                break;
        }
        for(int i = 0; i < 4; i++) {
            coordsB[i] = coordsA[i];
            coordsA[i].x += dx;
        }
        if(!check()) {
            for(int i = 0; i < 4; i++) {
                coordsA[i] = coordsB[i];
            }
        }
        if(rotate) {
            rotatePiece();
            if(!check()) {
                for(int i = 0; i < 4; i++) {
                   coordsA[i] = coordsB[i];
                 }
             }
        }
      
        if(timer > delay) {
            for(int i = 0; i < 4; i++) {
                coordsB[i] = coordsA[i];
                coordsA[i].y += 1;
            }
            if(!check()) {
                for(int i = 0; i < 4; i++) {
                    FIELD[coordsB[i].y][coordsB[i].x] = colorNum;
                }
                colorNum = 1 + rand() % 7;
                int n = rand() % 7;
                getPiece(n);
            } 
            timer = 0;
        }

        dx = 0;
        rotate = false;

        system("clear");
        
        for(int i = 0; i < height; i++) {
            for(int j = 0; j < width; j++) {
                if(FIELD[i][j] == '+') {
                    continue;
                }
            }
        }        

//        initEmptyField();   
        insertPiece();
        displayField();
      //  th.join();
    }
//    normal(); 
}

void    goDown() {
//    float timer = 0;
//    float delay = 0.3;
    float clk = 600000;

        usleep(clk);
//        timer += clk;        

//          if(timer > delay) {
            for(int i = 0; i < 4; i++) {
                coordsB[i] = coordsA[i];
                coordsA[i].y += 1;
            }
  /*          if(!check()) {
                for(int i = 0; i < 4; i++) {
                    FIELD[coordsB[i].y][coordsB[i].x] = colorNum;
                }
                colorNum = 1 + rand() % 7;
                int n = rand() % 7;
                getPiece(n);
            } */
//            timer = 0;
//        }
  
}

void    getPiece(int n) {
    // Getting randomized piece's (x, y) coordinates
    for(int i = 0; i < 4; i++) {
        coordsA[i].x = PIECES[n][i] % 2;
        coordsA[i].y = PIECES[n][i] / 2;
    }
}

void    rotatePiece() {
    // Rotating piece, and getting it's (x, y) coordinates
    Coord c = coordsA[1];
    for(int i = 0; i < 4; i++) {
        int x = coordsA[i].y - c.y;
        int y = coordsA[i].x - c.x;
        coordsA[i].x = c.x - x;
        coordsA[i].y = c.y + y;
    }
}

bool check() {
    // Checking if piece is innside FIELD or not
    for (int i = 0; i < 4; i++) {
        if (coordsA[i].x < 0 || coordsA[i].x >= width || coordsA[i].y >= height) {
            return 0;
        } else if (FIELD[coordsA[i].y][coordsA[i].x]) {
            return 0;
        }
    }
    return 1;
}

void    insertPiece() {
    int start = width / 2;
    
    // Inserting piece in FIELD
    for (int i = 0; i < 4; i++) {
        FIELD[coordsA[i].y][coordsA[i].x + start] = '+';
    }
}

void    initEmptyField() {
    // Setting playing FIELD with ' '
    for(int i = 0; i < height; i++) {
        for(int j = 0; j < width; j++) {
            FIELD[i][j] = ' ';
        }
    }
    
    // Setting FIELD's borders
    for(int i = 0; i < height; i++) {
        FIELD[i][0] = 186;  //186
        FIELD[i][width - 1] = 186;   //186
        FIELD[height - 1][i] = 186;  //205
    }
}

void    displayField() {
    // Displayin playing FIELD
    for(int i = 0; i < height; i++) {
        for(int j = 0; j < width; j++) {
            std::cout << RED;
            std::cout << FIELD[i][j];
        }
        std::cout << std::endl;
    }
}
