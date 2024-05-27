/* Proyecto 3: Crea un programa en C++ para guardar las notas de N alumnos, N tiene que ser mayor o igual que 20 o menor o igual que 30, 
esto se debe de verificar en el programa, y en caso de que el numero de alumnos este fuera del rango, se debe de mostrar la opción de ingresar de nuevo el numero de alumnos.

Una vez que tengamos los notas guardadas dentro de un arreglo, hay que sumar todas las calificaciones, mostrar el promedio del salón, 
mostrar el alumno con nota mas alta, mostrar alumnos con nota promedio (rango de promedio – 1 a promedio + 1) y el alumno con menor nota.

A los alumnos que tiene una nota menor o igual a 6 se les encargo un trabajo, este trabajo suma un punto mas a su nota. 
Se debe de utilizar el arreglo con las notas originales para generar otro arreglo con las notas modificadas de estos alumnos. 
Imprimir las dos notas en columnas diferentes.  

Al final se debe de mostrar la opción para volver a calcular mas notas de alumnos, o finalizar el programa. */

#include<iostream>

using namespace std;

int main(){
	//Declarar variables
	int n; //Número de alumnos
	int opcion =1; //Opción: volver a calcular notas o finalizar programa
	
	while(opcion != 2){
		if(opcion == 1){
			
			do{
				//Ingresar el número de alumnos 
				cout<<endl<<"Ingrese el numero de alumnos: ";
				cin>>n;
				
				//En caso de que el numero de alumnos este fuera de rango creamos un buvle para que siga preguntando el numero de alumnos
				if(n < 20 || n > 30){
					cout<<endl<<"Numero de alumnos fuera de rango. Intentalo de nuevo";
				}
			}while(n<20 || n>30);
			
			//Delimitamos el rango para el numero de alumnos (20<=n<=30)
			if(n>=20 and n<=30){ 
		
				//Declaramos array de las notas de n alumnos
				int notas[n]={};
			
				//Declaramos las variables que se tienen que restablecer en caso de volver a elegir la opción 1.
				float suma = 0; //Suma de las calificaciones 
				float promedio = 0;  //Promedio del salón
				float max = 0; //Nota máxima
				int mayor = 0; //Alumno con la nota máxima
				float min = 1000; //Nota menor
				int menor = 0; //Alumno con la nota mínima
				int rep = 0; //Contador de alumnos con 6 o menos rep-->Reprobados
			
				//Llenamos el array con las notas
				for(int i=0 ; i<n ; i++){
					cout<<endl<<"Ingrese nota del alumno "<<(i+1)<<": ";
					cin>>notas[i];
				
					//Suma de las notas
					suma += notas[i];
					
					//Nota más alta
					if(notas[i]>max){
						max = notas[i];
						mayor = (i+1);
					}
					
					//Menor nota
					if(notas[i]<min){
						min = notas[i];
						menor = (i+1);
					}
				}
				//Promedio del salón
				promedio = suma / n;				
				
				//Imprimir datos de suma y promedio
				cout<<endl<<"Suma de las notas: "<<suma;
				cout<<endl<<"Promedio del salon: "<<promedio;
				
				//Verificar si hay más alumnos con la misma nota (máxima o mínima) e imprimirlos
					//Menor
				cout<<endl<<endl<<"Nota Menor: "<<min<<"; ";
				for(int i=0 ; i<n ; i++){
					if(notas[i]==min){
						cout<< " Alumno: "<<(i+1)<<".";
					}
				}
					//Mayor
				cout<<endl<<"Nota Mayor: "<<max<<"; ";
				for(int i=0 ; i<n ; i++){
					if(notas[i]==max){
						cout<< " Alumno: "<<(i+1)<<".";
					}
				}
								
				//Alumnos con nota promedio
				cout<<endl<<endl<<"Alumnos con notas promedios";
				for(int i=0 ; i<n ;i++){
					if(notas[i]>=(promedio-1) && notas[i]<=(promedio+1)){
						cout<<endl<<"Alumno: "<<(i+1)<<"; Nota: "<<notas[i];
					}
				}
				
				//Alumnos con nota menor o igual a 6 que realizaron un trabajo
				cout<<endl<<endl<<"Alumnos con 6 o menos";
				int reprobados[rep] ={};
				for(int i=0 ; i<n ;i++){
					if(notas[i]<=6){
						cout<<endl<<"Alumno: "<<(i+1)<<", Nota: "<<notas[i];
						reprobados[rep] = notas[i];
						rep++;
					}
				}
				//Agrgeamos el punto extra a estos alumnos
				int extra[rep] = {};
				cout<<endl<<endl<<"Calificacion     Calificacion ";
				cout<<endl<<"Anterior         Actual";
				for(int i=0 ; i<rep ; i++){
					extra[i] = (reprobados[i]+1);
					cout<<endl<<"   "<<reprobados[i]<<"                 "<<extra[i];
				}
				
			}
			else{
				cout<<endl<<"Opcion invalida. Ingresar de nuevo el numero de alumnos"<<endl;
			}
		}
		else{
			cout<<endl<<"Opcion invalida, ingrese una opcion valida: ";
		}
		
	//Preguntamos al usuario si quiere volver a ingresar alumnos o terminar el programa
	cout<<endl<<endl<<"Opciones: "<<endl<<"1.- Ingresar alumnos de nuevo."<<endl<<"2.- Terminar programa"<<endl<<"Ingrese una opcion: ";
	cin>>opcion;

	}	
	
	cout<<endl<<endl<<"Fin del programa";	
	
	return 0;
}
