#include<iostream>
using namespace std;
int sumador(int num1,int num2,int num3){
	return(num1+num2+num3);
}
int main(){
	int num1,num2,num3;
	char salir;	    
    cout << "Introduce un numero: "; cin >> num1;
    cout << "Introduce un numero: "; cin >> num2;
    cout << "Introduce un numero: "; cin >> num3;
	cout<<"El resultado es:"<<sumador(num1,num2,num3);
	cin>>salir;
	return 0;	
}
//Para hacer funciones se ponen arriba,antes de main, se pone el nombre de la funcion con int(nombre) y despues
//un parentesis con las cosas que se van a usar, tambien con int(cosa1,cosa2,cosa3), separadas por comas
//despues ponemos return(operacion que quiero hacer con las cosas)
//en main habrá que int los mismos objetos y otros adicionales si se van a usar
//y hacer el programa normal, hasta llegar a la parte en la que quieres que aparezca la funcion
//ahi se pone el nombre de la funcion sin el int pero con (cosa1,cosa2,cosa3)
