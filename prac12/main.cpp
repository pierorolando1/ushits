#include <iostream>

using namespace std;

int main () {

  int count = 0;

  int score = 0;

  int arr[6] = {0,0,0,0,0,0}; 

  while(score != 100) { 
    system("clear");
    cout << "Calificación del estudiante " << count+1 << ": ";
    cin >> score;

    if(score == 100) break;

    arr[score] += 1;
    count++;
  }

  system("clear");

  cout << "Estudiantes encuestados: " << count << endl; 
  cout << "Frecuencias de calificaciones\tNumero estudiantes\tHistograma"<<endl;

  for(int i = 0; i < 6; i++) {
    cout << "\t\t" << i << "\t\t" << arr[i] << "\t\t\t";

    for(int j = 0; j < arr[i]; j++) {
      cout << "*";
    }

    cout << "\n";
  }



  return 0;
}
