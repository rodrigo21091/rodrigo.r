#include <iostream>
#include <conio.h>
#include<string.h>

using namespace std;


 struct corredor{
 	char nombre[20];
 	int edad;
 	char sexo[10];
 	char club[20];
 	
}c1;

int main(){
	char categoria[20];
	
	cout<<"nombre: ";
	cin.getline(c1.nombre,20,'\n');
	cout<<"edad: ";
	cin>>c1.edad;
	cout<<"sexo: ";
	cin.getline(c1.club,20,'\n');
	
	if(c1.edad <=18){
		strcpy(categoria,"juvenil");
	}
	else if(c1.edad <=40){
		strcpy(categoria,"senior");
	}
	else{  
	    strcpy(categoria,"veterano");
	}
	
	cout<<"\n\ndatos del corredor: "<<endl;
	cout<<"nombre: "<<c1.nombre<<endl;
	cout<<"edad: "<<c1.edad<<endl;
	cout<<"sexo: F "<<c1.sexo<<endl;
	cout<<"club las mercedes: privada "<<c1.club<<endl;
	cout<<"categoria: "<<categoria<<endl;
	
	
	getch();
	return 0;
	
}