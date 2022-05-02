#include "../includes/headers.hpp"
#include "../includes/styles.hpp"

#include <iostream>

void    printExit() {
    system("clear");

    int x = 55;
    int y = 13;
    std::cout << GREEN << BOLD;

    gotoxy(x, y+1);
    std::cout << " ____                                   ";
    gotoxy(x, y+2);
    std::cout << "/'  _`'                                 ";
    gotoxy(x, y+3);
    std::cout << "' ' '/'_'    ___     ___ ___       __   ";
    gotoxy(x, y+4);
    std::cout << " ' ' '/_/_  / __`' /' __` __`'   /'__`' ";
    gotoxy(x, y+5);
    std::cout << "  ' ' 'L' '/' 'L' '/' '/' '/' ' /'  __/ ";
    gotoxy(x, y+6);
    std::cout << "   ' '____/' '____/' '_' '_' '_'' '____'";
    gotoxy(x, y+7);
    std::cout << "    '/___/  '/___/  '/_/'/_/'/_/ '/____/";
    gotoxy(x, y+8);
    std::cout << '\n';
    gotoxy(x, y+9);
    std::cout << " ____                       __         ";
    gotoxy(x, y+10);
    std::cout << "/'  _`'                    /' '        ";
    gotoxy(x, y+11);
    std::cout << "' ' 'L' '     __       ___ ' ' '/''    ";
    gotoxy(x, y+12);
    std::cout << " ' '  _ <'  /'__`'    /'___'' ' , <    ";
    gotoxy(x, y+13);
    std::cout << "  ' ' 'L' '' |L|.'_ /' '__/ ' ' ''`'  ";
    gotoxy(x, y+14);
    std::cout << "   ' '____/' '__/.'_'' '____' ' '_' '_'";
    gotoxy(x, y+15);
    std::cout << "    '/___/  ''__/'/_/ ''____/  '/_/''_/";
    gotoxy(x, y+16);
    std::cout << '\n';
    gotoxy(x, y+17);
    std::cout << " __                __                    __     ";
    gotoxy(x, y+18);
    std::cout << "/' '              /' '__                /' '    ";
    gotoxy(x, y+19);
    std::cout << "' ' '         __  ' ' ,_'     __   _ __ ' ' '   ";
    gotoxy(x, y+20);
    std::cout << " ' ' '  __  /'__`' ' ' '/   /'__`'/'`'__'' ' '  ";
    gotoxy(x, y+21);
    std::cout << "  ' ' 'L' '/' 'L'.'_' ' '_ /'  __/' ' '/  ' '_' ";
    gotoxy(x, y+22);
    std::cout << "   ' '____/' '__/.'_'' '__'' '____'' '_'   '/'_'";
    gotoxy(x, y+23);
    std::cout << "    '/___/  '/__/'/_/ '/__/ '/____/ '/_/    '/_/" << std::endl;;

    std::cout << RESET;
    return;
}


void	gameOver() {
	system("clear");

	int x = 75;
	int y = 10;
	std::cout << RED;
	gotoxy(x, y);
	std::cout << " _______  _______  _______  _______    _______           _______  _______ ";
	gotoxy(x, y+1);
	std::cout << "(  ____ |(  ___  )(       )(  ____ |  (  ___  )||     /|(  ____ |(  ____ )";
	gotoxy(x, y+2);
	std::cout << "| (    |/| (   ) || () () || (    |/  | (   ) || )   ( || (    |/| (    )|";
	gotoxy(x, y+3);
	std::cout << "| |      | (___) || || || || (__      | |   | || |   | || (__    | (____)|";
	gotoxy(x, y+4);
	std::cout << "| | ____ |  ___  || |(_)| ||  __)     | |   | |( (   ) )|  __)   |     __)";
	gotoxy(x, y+5);
	std::cout << "| | |_  )| (   ) || |   | || (        | |   | | | |_/ / | (      | (| (   ";
	gotoxy(x, y+6);
	std::cout << "| (___) || )   ( || )   ( || (____/|  | (___) |  |   /  | (____/|| ) | |__";
	gotoxy(x, y+7);
	std::cout << "(_______)|/     |||/     ||(_______/  (_______)   |_/   (_______/|/   |__/\n";
	gotoxy(x, y+8);
    
    std::cout << RESET;
    return;
}
