#include <iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void pedirdatos();
void ordenararreglo(int *,int);
void mostrararreglo(int *,int);

int nelementos, *elemento;

int main(){
	pedirdatos();
	ordenararreglo(elemento,nelementos);
	mostrararreglo(elemento,nelementos);
	
	delete[] elemento;
	
		
	getch();
	return 0;
		
}


void pedirdatos(){
	cout<<"digite el numero de elementos del arreglo: ";
	cin>>nelementos;
	
	elemento = new int [nelementos];
	
	for(int i=0;i<nelementos;i++){
		cout<<"digite un numero["<<i<<"]: ";
		cin>>*(elemento+i); 
		
		
	}
	
	
	
	
}
void ordenararreglo(int *elemento,int nelementos){
	int aux;
	
	for(int i=0;i<nelementos;i++){
		for(int j=0;j<nelementos-1;j++){
		   if(*(elemento+j) > *(elemento+j+1)){
		   	 aux = *(elemento+j);
		   	 *(elemento+j) = *(elemento+j+1);
		   	 *(elemento+j+1) = aux;
		   }	
			
		}
	}
	
}

void mostrararreglo(int *elemento,int nelemento){
	cout<<"\n\nmostrando arreglo ordenado: ";
	for(int i=0;i<nelementos;i++){
		cout<<*(elemento+i);
	}
	
	
}