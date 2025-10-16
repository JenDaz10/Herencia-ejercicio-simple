#include <iostream>

using namespace std;

class Canino{ //Esta es la clase padre o SuperClase
	protected:
		string especie;
	public:
		Canino(string especie){
			this->especie=especie;
		}
	string getEspecie() {return especie;}
};
class Perro : public Canino //Esta es la clase hija o SubClase
{//los perros pertenecen a los caninos, así como los lobos 
	private:
		string raza;
		string nombre;
	public:
		Perro(string especie, string raza, string nombre):Canino(especie)
		{
			this->raza=raza;
			this->nombre=nombre;
		}
		string getRaza(){return raza;}
		string getNombre() {return nombre;}
};

int main (){
	Perro *P1=new Perro("Perro", "Pastor Belga", "Toby");
	
	cout << "Se ha ingresado la especie " << P1->getEspecie() << endl;
	cout << "Cuyo raza es " << P1->getRaza() << endl;
	cout << "Y su nombre es " << P1->getNombre() << endl;	
} 
//Yeny Diaz
