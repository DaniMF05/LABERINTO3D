#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Puntuacion {
    string nombre;
      int minutos;
    int segundos;
};


int main (){
	int opcion;

 std::vector<Puntuacion> puntajes;

    do{
	 cout << "Bienvenido al: " << endl;
     cout <<" _           ______    ______       ______     _________ "<<endl;
     cout << "| |        /       |  |      |     |____  |   |__       |   " << endl;
     cout << "| |       |   __   |  |  []  |       ___| |      |  __  |  " << endl;
     cout << "| |       |  |__|  |  |     <       |___  |      | |__| | " << endl;
     cout << "| |____   |   __   |  |  []  |      ____| |    __|      |  " << endl;
     cout << "|______|  |__|  |__|  |______/     |______|   |_________|   " << endl;

    cout << "" << endl;
    cout << "1. Jugar" << endl;
    cout << "2. Instrucciones" << endl;
    cout << "3. Creditos" << endl;
    cout << "4. Guardar progreso" << endl;
    cout << "5. lista de puntaje" << endl;
    cout << "6. Salir" << endl;
    cout << "Por favor, selecciona una opcion: ";

    cin >> opcion;
    Puntuacion nuevaPuntuacion;

    switch (opcion) {
        case 1:
           system ("PONER LA UBICACION DEL ARCHIVO JUEGOFINAL EN TU ORDENADOR");
        
            break;
	  case 2:
      cout << "" << endl;
      cout << "" << endl;
      cout<<"INSTRUCCIONES PARA EL JUEGO"<<endl;
      cout<<"Con 'W' y 'S' Mueves al personaje "<<endl;
    cout<<"Con 'A' y 'D' Mueves la camara del personaje "<<endl;
    cout << "" << endl;
    cout<<"INTENTA LLEGAR LO MAS RAPIDO POSIBLE AL FINAL DEL LABERINTO! "<<endl;
    cout << "" << endl;


      break;
      case 3:
      cout << "" << endl;
      cout << "" << endl;
      cout<<"UN JUEGO CREADO POR: "<<endl;
      cout<<"-Joshua Daniel Menendez Farias "<<endl;
      cout<<"-David Alejandro Lopez Meza "<<endl;
      cout<<"-Maria Celeste Gallardo Moreno"<<endl;
      cout << "" << endl;
      cout << "" << endl;


break;
      case 4:
      cout << "" << endl;
      cout << "" << endl;
                    cout << "Ingrese el nombre del jugador: ";
                    cin >> nuevaPuntuacion.nombre;
                    cout << "Ingrese el tiempo en minutos: ";
                    cin >> nuevaPuntuacion.minutos;
                    cout << "Ingrese el tiempo en segundos: ";
                    cin >> nuevaPuntuacion.segundos;
                    puntajes.push_back(nuevaPuntuacion);
                    cout << "Progreso guardado exitosamente." << endl;
                    cout << "" << endl;
                    cout << "" << endl;
                    break;
case 5:
                cout << "" << endl;
                cout << "" << endl;
                sort(puntajes.begin(), puntajes.end(), [](const Puntuacion& a, const Puntuacion& b) {
                    return a.minutos < b.minutos || (a.minutos == b.minutos && a.segundos < b.segundos);
                });

                for (const auto& puntuacion : puntajes) {
                    cout << "Nombre: " << puntuacion.nombre << ", Tiempo: " << puntuacion.minutos << "m " << puntuacion.segundos << "s" << endl;
                }
                cout << "" << endl;
                cout << "" << endl;
                break;

            case 6:
                cout << "Saliendo del juego." << endl;
                return 0;
                break;


            default:
                cout << "Opcion no válida. Por favor, selecciona una opción valida." << endl;
                break;
        }


    } while(opcion <=7);

}


