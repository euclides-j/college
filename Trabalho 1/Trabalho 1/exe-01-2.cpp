#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;

void rep(float sea[]) {
	setlocale(LC_ALL, "Portuguese");
	int i;
	if(sea[i]==sea[i+1]){
		cout<<"H� sim n�meros repitidos";
	}
	else {
		cout<<"N�o h� n�meros repetidos";
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
