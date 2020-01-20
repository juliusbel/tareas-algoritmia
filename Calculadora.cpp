#include <iostream>

using namespace std;

int suma(int y, int z){
	int res;
	res= y+z;
	return res;
}

int resta(int y, int z){
	int res;
	res= y-z;
	return res;
}

int multiplicacion(int y, int z){
	int res;
	res= y*z;
	return res;
}

float division(int y, int z){
	int res;
	res= y/z;
	return res;
}
int main(){
	int x,y,z,res,sino;
	cout<<"calculadora no cientifica \n \n" << "ingresa el numero de la operacion que deseas realizar \n 1) Suma \n 2) Resta \n 3) Multiplicación \n 4) Division \n";
	cin>>x;
	cout<<"ingresa el primer numero \n ";
	cin>>y;
	cout<<"ingresa el segundo numero numero \n ";
	cin>>z;
	if(x==1){
		res= suma(y,z);
		cout<<"el resultado es: "<< res;
	}
	else if(x==2){
		res= resta(y,z);
		cout<<"el resultado es: "<< res;
	}
	else if(x==3){
		res= multiplicacion(y,z);
		cout<<"el resultado es: "<< res;
	}
	else if(x==4){
		res= division(y,z);
		cout<<"el resultado es: "<< res;
	}
	else{
		cout<<"esa operacion no existe :P ingresa una existente \n";
		main();
	}
	return 0;
}
