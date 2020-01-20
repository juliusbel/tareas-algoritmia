#include <iostream>
#include <string>
using namespace std;

bool prueba(string palindromo){
	int x,i,j,k=0;
	x= palindromo.size()-1;
	//cout<<palindromo.size()<<"\n";
	for(i=x,j=0;i>=j;i--,j++){
		//cout<<palindromo[i]<<" ";
		//cout<<palindromo[j]<<" \n";
		if(palindromo[i]==palindromo[j]){
			k=k+1;
			//cout<<k;
		}
	}
	if((palindromo.size()+1)/2==k){
		return true;
	}
	else{
		return false;
	}
}


int main(){
	string palindromo;
	bool resultado;
	cout<<"ingresa una cadena para comprobar si es un palindromo \n";
	cin>>palindromo;
	resultado=prueba(palindromo);
	if(resultado){
		cout<<"la cadena es un palindromo";
	}
	else{
		cout<<"la cadena no es un palindromo";
	}
}
