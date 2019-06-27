#include<iostream>
#include<math.h>

class FigGeometrica{
	private:
		static int Quantidade;
	public:
		FigGeometrica(){
       			 Quantidade++;
		}//fim Construtor
		virtual float perimetro() = 0;
		virtual float area() = 0;
		static int quantidade(){
			return Quantidade;
		}//fim quntidade()
};//fim class FigGeometrica

int FigGeometrica::Quantidade=0;

class Circulo : public FigGeometrica{
	private:
		float raio;
		static int Quantidade;
	public:
		void setRaio(float raio);
		float getRaio();
		Circulo():FigGeometrica(){
			setRaio(0);
			Quantidade++;
		}//fim circulo()
		Circulo(float raio):FigGeometrica(){
			setRaio(raio);
			Quantidade++;
		}//fim circulo(float raio)
		float perimetro();
		float area();
		static int quantidade(){
			return Quantidade;
		}//fim quantidade()
};//fim class Circulo

int Circulo::Quantidade=0;
void Circulo::setRaio(float raio){
	if(raio<0){
		this->raio=0;
	}//fim if
	else{
		this->raio=raio;
	}//fim else
}//fim setRaio
float Circulo::getRaio(){
	return this->raio;
}//fim getRaio
float Circulo::perimetro(){
	const float PI=3.14;
	float perimetro,
	      raio;
	raio=getRaio();
	perimetro = (2*PI*raio);
	return perimetro;
}//fim float perimetro()
float Circulo::area(){
	const float PI=3.14;
	float area,
	      raio;
	raio=getRaio();
	area = (PI*raio*raio);
	return area;
}//fim float area()

class Quadrado:public FigGeometrica{
	private:
		float lado;
		static int Quantidade;
	public:
		Quadrado();
		Quadrado(float lado);
		void setLado(float lado);
		float getLado();
		float perimetro();
		float area();
		static int quantidade();
};//fim class Quadrado

int Quadrado::Quantidade=0;
Quadrado::Quadrado(){
	setLado(0);
}//fim construtor Quadrado()
Quadrado::Quadrado(float lado){
	setLado(lado);
}//fim construtor Quadrado(float lado)
void Quadrado::setLado(float lado){
	if(lado<0){
		this->lado=0;
	}//fim if
	else{
		this->lado=lado;
	}//fim else
}//fim setLado
float Quadrado::getLado(){
	return this->lado;
}//fim getLado()
float Quadrado::perimetro(){
	float lado=getLado();
	float perimetro=4*lado;
	return perimetro;
}//fim Quadrado
float Quadrado::area(){
	float lado=getLado();
	float area=lado*lado;
	return area;
}//fim area();
int Quadrado::quantidade(){
	return Quantidade;
}//fim quantidade

class Triangulo:public FigGeometrica{
private:
	float lado1;
	float lado2;
	float lado3;
	static int Quantidade;
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
	
	float perimetro(){
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
	
	bool condicoes(){
		float lado1=getLado1();
		float lado2=getLado2();
		float lado3=getLado3();
		bool existe=false;
		if(condicao1() & condicao2() & condicao3()){
			existe=true;
		}//fim if
		return existe;
	}//fim condicoesTriangulo
	
	int tipo(){
		int tipo=0;			//Tipos: 0=inválido, 1=equilátero, 2=isósceles, 3=escaleno;
		float lado1=getLado1();
                float lado2=getLado2();
                float lado3=getLado3();
		bool existe=condicoes();
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
	
	bool saoIguais(Triangulo triangulo2){
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
	
	bool saoIguaisPonteiro(Triangulo *triangulo2){
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
	
	Triangulo() : FigGeometrica(){
		setLado1(0);
		setLado2(0);
		setLado3(0);
		Quantidade++;
	}//fim contrutor Triangulo()
	
	Triangulo(float lado) : FigGeometrica(){
		setLado1(lado);
		setLado2(lado);
		setLado3(lado);
		Quantidade++;
	}//fim contrutor Triangulo(-----)
	
	Triangulo(float lado1, float lado2, float lado3) : FigGeometrica(){
		setLado1(lado1);
		setLado2(lado2);
		setLado3(lado3);
		Quantidade++;
	}//fim construtor Triangulo(-----,-----,-----)

	static int quantidade(){
		return Quantidade;
	}//fim getQuantidade
	
	float area(){
		float area=0;
		float lado1=getLado1();
		float lado2=getLado2();
		float lado3=getLado3();
		int tipoTriangulo;
		tipoTriangulo=tipo();
		if(tipoTriangulo=1){//tipo equilatero
			float assis = lado1/2;
			float altura;
			altura=sqrt(pow(lado1,2)-pow(assis,2)); //Usando pitagoras : raiz quadrada(hipotenusa²-altura²)
			area=(altura*lado1)/2;
		}//fim calculo de area 1
		else if(tipoTriangulo=2){//tipo isosceles
			float assis;
			//Sequencia de teste para encontrar o maior lado
			if(lado2>lado3 && lado3==lado1){
				assis=lado1;
				lado1=lado2;
				lado2=assis;
			}//fim else if
			else{
				assis=lado1;
				lado1=lado3;
				lado3=assis;
			}//fim else
			assis = lado1/2;
                        float altura;
                        altura=sqrt(pow(lado1,2)-pow(assis,2)); //Usando pitagoras : raiz quadrada(hipotenusa²-altura²)
                        area=(altura*lado1)/2;
		}//fim else if
		else if(tipoTriangulo=3){//tipo escaleno
			float semiperimetro;
			semiperimetro=(lado1+lado2+lado3)/2;
			//Usando a formula de Heron : raiz quadradra[Semiperimetro*(semiperimetro-lado1)*(semiperimetro-lado2)*(semiperimetro-lado3)]
			float heron = semiperimetro*(semiperimetro-lado1)*(semiperimetro-lado2)*(semiperimetro-lado3);
			float area = sqrt(heron);
		}//fim else if
		return area;
	}//fim float area()
};//Fim class Triangulo

int Triangulo::Quantidade=0;

int main(){
	Circulo C1(10);
	std::cout<<C1.perimetro()<<"\n";
	return 0;
}//fim main
