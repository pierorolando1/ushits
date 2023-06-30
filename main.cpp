/**
* @author Piero Rolando. <rolandopiero63@gmail.com>
* @date 14/04/2023
* @version 0.1
* @institution National University of Trujillo
*/

#include <cstdlib>
#include <iostream>
#include <math.h>
#include "conio.h"

#include "figuras.h"

using namespace std;

const char* CLEAR = "clear";

int generateRandomInt(int n) {
    // Seed the random number generator
    srand(time(nullptr));
    
    // Generate a random integer between 0 and n
    int randomInt = rand() % (n + 1);
    
    return randomInt;
}

string figure[16] = {
  "  /\\  ",
  " /= \\ ",
  " |==| ",
  " |_:| ",
  " |==| ",
  " |  | ",
  " |  | ",
  "/\\/\\/\\",
  "||||||",
  "||||||",
  "||||||",
  "``ii``",
  " /__\\ ",
  "( () )",
  " (  ) ",
  "  ()  "
};

/*

Opción 1:
["1+1", "2"] ["Q", "A"]

Opcion 2:
["1+1", ["1","4","2","3"], 2] ["Q", [alternatives], correct_answer]
*/

string questions[50][2] = {
  {"Si un carro recorre 10 metros en 1 segundo, a que velocidad vá (en m/s)", "10"}
};


int counter = 0;

void drawRocket() {
  system("clear");

  for(int i = 0; i < counter; i++) {
    gotoxy(15, 10+i);
    cout << figure[i];
  }

}
const int midX = MAX_X/2;
const int midY = MAX_Y/2;

void presentacion() {

  gotoxy(midX-20, midY-5);
  cout << "Bienvenido al juego de preguntas y respuestas";

  gotoxy(midX-20, midY-3);
  cout << "  Presione cualquier tecla para continuar";
  figura_presentacion();

  getch();
}

const string PASSWORD = "hola";

bool clave() {
  int i = 0;

  do {
    system(CLEAR);
    gotoxy(midX-10, midY-5);
    cout << "Password: ";
    gotoxy(midX+1, midY-5);
    string password;
    cin >> password;
    if(password == PASSWORD) return true;

    i++;
  } while(i < 3);

  return false;
}

string usuario = "<usuario>";

void bienvenida() {
  system(CLEAR);
  gotoxy(midX-20, midY-5);
  cout << "Cómo te llamas?: ";
  gotoxy(midX, midY-5);

  cin >> usuario;

  system(CLEAR);
  gotoxy(midX-10, midY-5);
  cout << "Bienvenido " << usuario;
  //TODO: figura de bienvenida
  getch();
  getch();
}


void instrucciones() {
  system(CLEAR);



}


void menu() {
  system(CLEAR);
  gotoxy(midX-20, midY-7);
  cout << "1. Instrucciones del juego";
  gotoxy(midX-20, midY-6);
  cout << "2. Jugar";
  gotoxy(midX-20, midY-5);
  cout << "3. Creditos";
  gotoxy(midX-20, midY-4);
  cout << "4. Salir";
  gotoxy(midX-20, midY-3);
  cout << "Ingrese una opción: ";
  gotoxy(midX-20, midY-2);
  int opcion;
  cin >> opcion;

  switch(opcion) {
    case 1:
    case 2:
    case 3:
      creditos();
    case 4:
      return;
      break;
    default:
      menu();
      break;
  }
}

void clave_incorrecta() {
  system(CLEAR);
  gotoxy(midX-20, midY-5);
  cout << "Intentó 3 veces ingresar con una clave incorrecta.";
  gotoxy(midX-20, midY-4);
  cout << "Comuníquese con el administrador";

  getch();
  getch();
}



int main() {
  system(CLEAR);

  presentacion();
  
  if(!clave()) {
    clave_incorrecta();
    return 0;
  } 

  bienvenida();
  menu();

  return 0;
}

