#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;

void rep(float sea[]) {
	setlocale(LC_ALL, "Portuguese");
	int i;
	if(sea[i]==sea[i+1]){
		cout<<"Há sim números repitidos";
	}
	else {
		cout<<"Não há números repetidos";
	}
	
}


int main() {

	float vetor[4];
	
	for(int i=0;i<4;i++){
		cout<<"Insira um valor: ";
		cin>>vetor[i];
	}
	
	rep(vetor);
}
