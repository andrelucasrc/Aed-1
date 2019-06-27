#include<iostream>

//Cabeçalho de classe:
class Triangulo{
private:
	float lado1;
	float lado2;
	float lado3;
	
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
};//Fim class Triangulo

//Cabeçalho de função:
float lerLado();
int lerNumeroTriangulo();

//Constantes globais:
const int QTD=5;

int main(){
	Triangulo triangulo;
	float lado1=lerLado();
	float lado2=lerLado();
	float lado3=lerLado();
	triangulo.setLado1(lado1);
	triangulo.setLado2(lado2);
	triangulo.setLado3(lado3);
	float perimetro;
	perimetro=triangulo.perimetroTriangulo();
	int tipo=triangulo.tipoTriangulo();
	std::cout<<"O perímetro é igual a "<<perimetro<<"\n";
	if(tipo==1){
		std::cout<<"O triângulo é do tipo equilátero.\n";
	}//fim if
	else if(tipo==2){
		std::cout<<"O triângulo é do tipo isósceles.\n";
	}//fim else if
	else if(tipo==3){
		std::cout<<"O triângulo é do tipo escaleno.\n";
	}//fim else if
	else{
		std::cout<<"O triângulo não atende as condições de existência, valor de lado inválido ou condições não aceitas\n";
	}//fim else;
	Triangulo triangulo2;
	triangulo2.lerLados();
	std::cout<<"O perimetro do triangulo2 é igual a "<<triangulo2.perimetroTriangulo()<<"\n";
	int tipo2=triangulo2.tipoTriangulo();
	if(tipo2==1){
                std::cout<<"O triângulo2 é do tipo equilátero.\n";
        }//fim if
        else if(tipo2==2){
                std::cout<<"O triângulo2 é do tipo isósceles.\n";
        }//fim else if
        else if(tipo2==3){
                std::cout<<"O triângulo2 é do tipo escaleno.\n";
        }//fim else if
        else{
                std::cout<<"O triângulo2 não atende as condições de existência, valor de lado inválido ou condições não aceitas\n";
        }//fim else;
	Triangulo triangulos[QTD];
	for(int i=0;i<QTD;i++){
		triangulos[i].lerLados();
	}//fim for leitura de lados
	for(int i=0;i<QTD;i++){
		std::cout<<"O triângulo["<<i<<"] tem como tipo o valor "<<triangulos[i].tipoTriangulo()<<"\n";
		std::cout<<"O triângulo["<<i<<"] tem como perimetro o valor "<<triangulos[i].perimetroTriangulo()<<"\n";
	}//fim for descrição de triângulos
	int numeroTriangulo1=lerNumeroTriangulo();
	int numeroTriangulo2=lerNumeroTriangulo();
	numeroTriangulo1-=1;
	numeroTriangulo2-=1;
	bool saoIguais;
	saoIguais=triangulos[numeroTriangulo1].saoIguaisTriangulo(triangulos[numeroTriangulo2]);
	if(saoIguais){
		std::cout<<"Os triângulos são iguais.\n";
	}//fim if
	else{
		std::cout<<"Os triângulos não são iguais.\n";
	}//fim else
	return 0;
}//fim main

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
