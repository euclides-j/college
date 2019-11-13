#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;

struct Livro{
	int codigo;
	char titulo[30], autor[30], categoria[20];
};

void listar(struct Livro liv[]){
	for(int i=0;i<3;i++){
		cout<<"<=============== Resultado ================>"<<endl;
		cout<<"<==========================================>"<<endl;
		cout<<liv[i].titulo<<endl;
		cout<<liv[i].autor<<endl;
		cout<<liv[i].categoria<<endl;
		cout<<liv[i].codigo<<endl;
	}
}

int main() {
	
	Livro l[3];
	
	cout<<"<========Insira os dados dos livros========>"<<endl;
	
	for(int j=0;j<3;j++){
		cout<<"<==========================================>"<<endl;
		cin>>l[j].titulo;
		cin>>l[j].autor;
		cin>>l[j].categoria;
		cin>>l[j].codigo;
	}
	
	listar(l);
}
