#include <iostream>
#include <conio.h>
using namespace std;

int main (){
  int numero, *dir_numero;
  
  cout<<"digite un numero: "; cin>>numero;
  
  dir_numero = &numero;
  
  if(*dir_numero%2==0){
  	cout<<"el numero "<<*dir_numero<<" es par"<<endl;
  	cout<<"posicion: "<<dir_numero<<endl;
  	
	  }

 else {
 	cout<<"el numero "<<*dir_numero<<" es impar"<<endl;
 	cout<<"posicion: "<<dir_numero<<endl;
 	
 	
 	
 }



getch();
return 0;


}