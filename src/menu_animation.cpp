#include "../includes/headers.hpp"
#include "../includes/styles.hpp"

#include <unistd.h>
#include <iostream>
#include <stdio.h>


void fallingTetris(bool magic, int &z) {
	system("clear");
	
	int x = 48; 
	int y = 2;
	printTetris(x, y);
	if(!magic) {
		gotoxy(x, y+14);
		std::cout << "  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
	} else {
		gotoxy(x, y+14);
        std::cout << "  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~          ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
		gotoxy(82, 34);
		std::cout << YELLOW;
		std::cout << "*  **       * **";
		gotoxy(82, 35);
		std::cout << "* ****     *****";
		gotoxy(82, 36);
		std::cout << "******     *****";
		gotoxy(88, z);
        std::cout << RED;
        std::cout << "  *  ";
        gotoxy(88, z+1);
        std::cout << "*****";
        ++z;
        if(z != 36) {
            usleep(75001);
            fallingTetris(1, z);
        }

	}
}

void	printTetris(int x, int y) {
	    gotoxy(x, y+1);
        std::cout << BOLDBLUE;
        std::cout << "  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ";
        gotoxy(x, y+2);
        std::cout << " |                   ___                       ___                       ___      |";
        gotoxy(x, y+3);
        std::cout << " |       ___        /  /'          ___        /  /'        ___          /  /'     |";
        gotoxy(x, y+4);
        std::cout << " |      /  /'      /  /:/_        /  /'      /  /::'      /  /'        /  /:/_    |";
        gotoxy(x, y+5);
        std::cout << " |     /  /:/     /  /:/ /'      /  /:/     /  /:/':'    /  /:/       /  /:/ /'   |";
        gotoxy(x, y+6);
        std::cout << " |    /  /:/     /  /:/ /:/_    /  /:/     /  /:/~/:/   /__/::'      /  /:/ /::'  |";
        gotoxy(x, y+7);
        std::cout << " |   /  /::'    /__/:/ /:/ /'  /  /::'    /__/:/ /:/___ '__'/':'__  /__/:/ /:/':' |";
        gotoxy(x, y+8);
        std::cout << " |  /__/:/':'   '  ':'/:/ /:/ /__/:/':'   '  ':'/:::::/    '  ':'/' '  ':'/:/~/:/ |";
        gotoxy(x, y+9); 
    	std::cout << " |  '__'/  ':'   '  '::/ /:/  '__'/  ':'   '  '::/~~~~      '__'::/  '  '::/ /:/  |";
        gotoxy(x, y+10);
        std::cout << " |       '  ':'   '  ':'/:/        '  ':'   '  ':'          /__/:/    '__'/ /:/   |";
        gotoxy(x, y+11);
        std::cout << " |        '__'/    '  '::/          '__'/    '  ':'         '__'/       /__/:/    |";
        gotoxy(x, y+12);
        std::cout << " |                  '__'/                     '__''                     '__'/     |";
        gotoxy(x, y+13);
        std::cout << " |                                                                                |\n";
}
