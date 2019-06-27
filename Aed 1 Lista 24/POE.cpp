#include<iostream>
#include<stdexcept>
using std::runtime_error;

//Cabeçalho de classe:
class Triangulo{
private:
	float lado1;
	float lado2;
	float lado3;
	static int quantidade;
public:
	void setLado1(int lado){
		if(lado>=0){
			this->lado1=lado;
		}//fim if
		else{
			this->lado1=0;
		}//fim else
	}//fim setLado1
	
	void setLado2(int lado){
                if(lado>=0){
                        this->lado2=lado;
                }//fim if
                else{
                        this->lado2=0;
                }//fim else
        }//fim setLado2

	void setLado3(int lado){
                if(lado>=0){
                        this->lado3=lado;
                }//fim if
                else{
                        this->lado3=0;
                }//fim else
        }//fim setLado3
	
	float getLado1(){
		return this->lado1;
	}//fim getLado1;

	float getLado2(){
                return this->lado2;
        }//fim getLado1;

	float getLado3(){
                return this->lado3;
        }//fim getLado1;
	
	float perimetroTriangulo(){
		float lado1=getLado1();
		float lado2=getLado2();
		float lado3=getLado3();
		float perimetro;
		perimetro=(lado1 + lado2 + lado3);
		return perimetro;
	}//fim perimetro;
	
	bool condicao1(){
		float lado1=getLado1();
                float lado2=getLado2();
                float lado3=getLado3();
		bool condicao=false;
		float assis;
		assis=lado2-lado3;
		if(assis<0){
			assis*=-1;
		}//fim if;
		if(assis<lado1 & lado1<lado2+lado3){
			condicao=true;
		}//fim if
		return condicao;
	}//fim condicao1
	
	bool condicao2(){
                float lado1=getLado1();
                float lado2=getLado2();
                float lado3=getLado3();
                bool condicao=false;
                float assis;
                assis=lado1-lado3;
                if(assis<0){
                        assis*=-1;
                }//fim if;
                if(assis<lado2 & lado2<lado1+lado3){
                        condicao=true;
                }//fim if
                return condicao;
        }//fim condicao2
	
	bool condicao3(){
                float lado1=getLado1();
                float lado2=getLado2();
                float lado3=getLado3();
                bool condicao=false;
                float assis;
                assis=lado1-lado2;
                if(assis<0){
                        assis*=-1;
                }//fim if;
                if(assis<lado3 & lado3<lado1+lado2){
                        condicao=true;
                }//fim if
                return condicao;
        }//fim condicao3
	
	bool condicoesTriangulo(){
		float lado1=getLado1();
		float lado2=getLado2();
		float lado3=getLado3();
		bool existe=false;
		if(condicao1() & condicao2() & condicao3()){
			existe=true;
		}//fim if
		return existe;
	}//fim condicoesTriangulo
	
	int tipoTriangulo(){
		int tipo=0;			//Tipos: 0=inválido, 1=equilátero, 2=isósceles, 3=escaleno;
		float lado1=getLado1();
                float lado2=getLado2();
                float lado3=getLado3();
		bool existe=condicoesTriangulo();
		if(existe){
			if(lado1!=0|lado2!=0|lado3!=0){
				if(lado1==lado2 & lado2==lado3){
					tipo=1;
				}//fim if
				else if(lado1!=lado2 & lado2!=lado3 & lado3!=lado1){
					tipo=3;
				}//fim else if
				else{
					tipo=2;
				}//fim else
			}//fim if
		}//fim if
		return tipo;
	}//fim tipo;
	
	void lerLados(){
		float lado1,
                      lado2,
		      lado3;
		std::cout<<"Digite o valor do primeiro lado: ";
		std::cin>>lado1;
		std::cout<<"Digite o valor do segundo lado: ";
                std::cin>>lado2;
		std::cout<<"Digite o valor do terceiro lado: ";
                std::cin>>lado3;
		this->setLado1(lado1);
		this->setLado2(lado2);
		this->setLado3(lado3);
	}//fim lerLados
	
	bool saoIguaisTriangulo(Triangulo triangulo2){
		float lado1=triangulo2.getLado1();
		float lado2=triangulo2.getLado2();
		float lado3=triangulo2.getLado3();
		bool saoIguais=false;
		if(this->lado1==lado1){
			if(this->lado2==lado2){
				if(this->lado3==lado3){
					saoIguais=true;
				}//fim if lado3
			}//fim if lado2
		}//fim if lado1
		return saoIguais;
	}//fim saoIguais
	
	bool saoIguaisTrianguloPont(Triangulo *triangulo2){
		float lado1=triangulo2->getLado1();
		float lado2=triangulo2->getLado2();
		float lado3=triangulo2->getLado3();
		bool saoIguais=false;
		if(this->lado1==lado1){
			if(this->lado2==lado2){
				if(this->lado3==lado3){
					saoIguais=true;
				}//fim if lado3
			}//fim if lado2
		}//fim if lado1
		return saoIguais;
	}//fim saoIguais
	
	Triangulo(){
		setLado1(0);
		setLado2(0);
		setLado3(0);
		quantidade++;
	}//fim contrutor Triangulo()
	
	Triangulo(float lado){
		setLado1(lado);
		setLado2(lado);
		setLado3(lado);
		quantidade++;
	}//fim contrutor Triangulo(-----)
	
	Triangulo(float lado1, float lado2, float lado3){
		setLado1(lado1);
		setLado2(lado2);
		setLado3(lado3);
		quantidade++;
	}//fim construtor Triangulo(-----,-----,-----)

	static int getQuantidade(){
		return quantidade;
	}//fim getQuantidade
	
};//Fim class Triangulo

class OutOfSize:public runtime_error{
	public:
	OutOfSize():runtime_error("Desired position can not be acessed"){}
};//fim class OutOfSize

class NullPointer:public runtime_error{
	public:
	NullPointer():runtime_error("Desired object is a null object"){}
};//fim class NullPointer

//Atribuições estáticas:
int Triangulo::quantidade=0;

//Cabeçalho de função:
float lerLado();
int lerNumeroTriangulo();
void listarPerimetro(Triangulo *triangulo[],int pos);
void listarLados(Triangulo *triangulo[],int pos);
void agradecimentos();
void criarTriangulo(Triangulo *triangulo[],int pos);
void informarTriangulo(Triangulo *triangulo[]);
void quantidadeIguais(Triangulo *triangulo[],int pos);
void listarTriangulosDoTipo(Triangulo *triangulo[]);
void listarTriangulosInexistentes(Triangulo *triangulo[]);
int interfaceMenu();
void menuTriangulos(Triangulo *triangulo[]);
int lerPosicao();

//Constantes globais:
const int QTD=5;
const int LIM=100;

int main(){
	Triangulo *ponTriangulos[LIM];
	int posicao;
	try{
		posicao=lerPosicao();
		if(posicao<0||posicao>(LIM-1)){
			throw OutOfSize();
		}//fim if
		//pontTriangulo[posicao] = new Triangulo();
		if(ponTriangulos[posicao]==NULL){
			throw NullPointer();
		}//fim if
	}//fim try
	catch(OutOfSize &positionFailed){
		std::cout<<"Failed: "<<positionFailed.what()<<"\n";
	}//fim catch
	catch(NullPointer &objectFailed){
		std::cout<<"Failed: "<<objectFailed.what()<<"\n";
	}//fim catch
	return 0;
}//fim main

//Início produtos brutos{
int lerPosicao(){
	int posicao;
	std::cout<<"Digite a posição desejada: ";
	std::cin>>posicao;
	return posicao;
}//fim lerPosição()

float lerLado(){
	float lado;
	std::cout<<"Digite o lado desejado: ";
	std::cin>>lado;
	return lado;
}//fim lerLado

int lerNumeroTriangulo(){
	int numero;
	do{
		std::cout<<"Digite o triângulo desejado[1-"<<QTD<<"]: ";
		std::cin>>numero;
	}while(numero<1 | numero>QTD);
	return numero;
}//fim lerNumeroTriangulo()

void listarPerimetro(Triangulo *triangulo[],int pos){
	int perimetro = triangulo[pos]->perimetroTriangulo();
	std::cout<<"O perimetro do triangulo["<<pos<<"] é igual a "<<perimetro<<"\n";
}//fim listarPerimetro()

void listarLados(Triangulo *triangulo[],int pos){
	int lado1=triangulo[pos]->getLado1();
	int lado2=triangulo[pos]->getLado2();
	int lado3=triangulo[pos]->getLado3();
	std::cout<<"O lado 1 do triângulo["<<pos<<"] é igual a "<<lado1<<"\n";
	std::cout<<"O lado 2 do triângulo["<<pos<<"] é igual a "<<lado2<<"\n";
	std::cout<<"O lado 3 do triângulo["<<pos<<"] é igual a "<<lado3<<"\n";
}//fim listarLados()

//}Fim produtos brutos
//Início produtos elaborados{

void agradecimentos(){
        std::cout<<"Obrigado por usar o programa e tenha um bom dia!"<<"\n";
}//fim agradecimentos()

void criarTriangulo(Triangulo *triangulo[],int pos){
        int lado1=lerLado();
        int lado2=lerLado();
        int lado3=lerLado();
        triangulo[pos]=new Triangulo(lado1,lado2,lado3);
}//fim criar triangulo

void informarTriangulo(Triangulo *triangulo[]){
	int quantidade=Triangulo::getQuantidade();
	for(int i=0; i<quantidade; i++){
		listarLados(triangulo,i);
		listarPerimetro(triangulo,i);
	}//fim for
}//fim informarTriangulos

void quantidadeIguais(Triangulo *triangulo[]){
	int quantidade=0;
	int tamanho=Triangulo::getQuantidade();
	int posReferencia;
	do{
		std::cout<<"Digite a posicao desejada: ";
		std::cin>>posReferencia;
	}while(posReferencia<0);
	for(int i=0; i<tamanho; i++){
		if(triangulo[posReferencia]->saoIguaisTrianguloPont(triangulo[i]) & i!=posReferencia){
			quantidade++;
		}//fim if
	}//fim for
	std::cout<<"A quantidade de triângulos iguais ao triângulo["<<posReferencia<<"] é igual a "<<quantidade<<"\n";
}//fim quantidadeIguais

void listarTriangulosDoTipo(Triangulo *triangulo[]){
	int tipo;
	do{
		std::cout<<"1 - Equilátero"<<"\n";
		std::cout<<"2 - Isósceles"<<"\n";
		std::cout<<"3 - Escaleno"<<"\n";
		std::cout<<"Digite o triângulo desejado de acordo com a lista acima: ";
		std::cin>>tipo;
	}while(tipo<1 | tipo>3);
	int quantidade=0;
	int tamanho=Triangulo::getQuantidade();
	for(int i=0; i<tamanho; i++){
		if(triangulo[i]->tipoTriangulo()==tipo){
			quantidade++;
		}//fim if
	}//fim for
	std::cout<<"A quantidade de triângulos do tipo "<<tipo<<" é igual a "<<quantidade<<"\n";
}//fim listarTriangulosDoTipo()

void listarTriangulosInexistentes(Triangulo *triangulo[]){
	int tamanho=Triangulo::getQuantidade();
	int quantidade=0;
	for(int i=0; i<tamanho; i++){
		if(!triangulo[i]->condicoesTriangulo()){
			std::cout<<"O triângulo["<<i<<"] não atende as condicões de existência de um triangulo\n";
			quantidade++;
		}//fim if
	}//fim for
	if(quantidade==0){
		std::cout<<"Todos os triângulos são triângulos válidos\n";
	}//fim if
}//listarTriangulosExistentes()

int interfaceMenu(){
	int opcao;
	do{
		std::cout<<"----------------------MENU------------------------\n";
		std::cout<<"0 – Sair do programa\n";
		std::cout<<"1 – Criar um triângulo\n";
		std::cout<<"2 – Listar triângulos \n";
		std::cout<<"3 – Triângulos iguais\n";
		std::cout<<"4 – Listar os triângulos de um determinado tipo \n";
		std::cout<<"5 – Verificar inconsistências\n";
		std::cout<<"Digite a opção listada acima desejada: ";
		std::cin>>opcao;
	}while(opcao<0 | opcao>5);
	return opcao;
}//fim interfaceMenu()

//}Fim produtos elaborados
//Início produto final{

void menuTriangulos(Triangulo *triangulo[]){
	int opcao;
	int pos=0;
	do{
		opcao=interfaceMenu();
		switch(opcao){
			case 1:
				if(pos<LIM){
					criarTriangulo(triangulo,pos);
					pos++;
				}//fim if
				else{
					std::cout<<"Não é possível criar mais triângulos\n\a";
				}//fim else
				break;
			case 2:
				if(pos>0){
					informarTriangulo(triangulo);
				}//fim if
				else{
					std::cout<<"Nenhum triângulo criado\n\a";
				}//fim else	
				break;
			case 3:
				if(pos>1){
					quantidadeIguais(triangulo);
				}//fim if
				else if(pos==0){
                                        std::cout<<"Nenhum triângulo criado\n\a";   
                                }//fim else
				else{
					std::cout<<"Existe apenas um triângulo criado isso faz a comparação ser impossível\n";
				}//fim else     
				break;
			case 4:
				if(pos>0){
					listarTriangulosDoTipo(triangulo);
				}//fim if
				else{
                                        std::cout<<"Nenhum triângulo criado\n\a";   
                                }//fim else     
				break;
			case 5:
				if(pos>0){
					listarTriangulosInexistentes(triangulo);
				}//fim if
				else{
                                        std::cout<<"Nenhum triângulo criado\n\a";   
                                }//fim else     
				break;
		}//fim switch menu
	}while(opcao!=0);
	agradecimentos();
}//fim menuTriangulos()
