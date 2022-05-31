#include <iostream>

 namespace std;
 
 struct funcionario{
 	
	 int prontuario;
	 string nome;
	 double salario;
 };
 
 struct Lista{
     funcionario func;
	 Lista* ant;
 };
 
 Lita* init(){
	 return NULL;
 }
 
 void Evazia(Lista* lista){
 	
	 return (lista == NULL);
 }
 /*
  Lista* Inserir(){
  	Lista listinha;
  	funcionario fun;
  	listinha.func = &fun;
  	
	} 
	 
 */
 Lista* inserir( Lista *lista,int i,String z, double y){
 	
	 funcioanrio *in = new funcionario;
	 in->prontuario = i;
	 in->nome = z;
	 in->salario = y;

	 return in ;
 }
 
  int main(int argc, char** argv)
  {
	  int k;
	  cout << " digite 0 para sair"<< endl;
	  cout << " digite 1 para incluir"<< endl;
	  cout << " digite 2 para excluir"<< endl;
	  cout << " digite 3 para pesquisar"<< endl;
	  cout << " digite 4 para listar"<< endl;
	  
	  
	  return 0;
  }