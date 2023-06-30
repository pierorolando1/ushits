#include <cstdlib>
#include <iostream>
#include <unistd.h>

using namespace std;

const int MAX_Y = 40;
const int MAX_X = 150;



void gotoxy(int XPos, int YPos) {
  printf("\033[%d;%dH", YPos+1, XPos+1);
}

void figura_presentacion() {
  /*
      gotoxy(70, MAX_Y-5);
      cout << "/\\/\\";
      gotoxy(70, MAX_Y-4);
      cout << "\\  /";
      gotoxy(70, MAX_Y-3);
      cout << " \\/ "; 
  */

  for(int i = 0; i < MAX_X; i++) {

    gotoxy(i-1, MAX_Y-5);cout << " ";
    gotoxy(i-1, MAX_Y-4);cout << " ";
    gotoxy(i-1, MAX_Y-3);cout << " ";

      gotoxy(i, MAX_Y-5);
      cout << "/\\/\\";
      gotoxy(i, MAX_Y-4);
      cout << "\\  /";
      gotoxy(i, MAX_Y-3);
      cout << " \\/ ";
      usleep(10000);
  }
}
