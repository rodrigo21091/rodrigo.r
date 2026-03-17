#include <iostream>
#include <conio.h>
using namespace std;

int main (){ 
 int numeros [10], *dir_numeros;
 
 for(int i=0;i<10;i++){
 	cout<<"digite un numero ["<<i<<"]: ";
 	cin>>numeros[i];
 	
 }
 
  dir_numeros = numeros; 
 
 for(int i=0;i<10;i++){
 	if(*dir_numeros%2==0){
 	   cout<<"el numero "<<*dir_numeros<<" es par"<<endl;
 	   cout<<"posicion: "<<dir_numeros<<endl;
 	   
	  }
	  else{
	  cout<<"el numero "<<*dir_numeros<<" es impar"<<endl;
	  cout<<"posicion: "<<dir_numeros<<endl;
	  }
	  
 	dir_numeros++;
 	
 	
 	
 }
 
 getch();
 return 0;
 
 }