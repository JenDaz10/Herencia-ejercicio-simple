#include <iostream>

using namespace std;

class Canino{ //Esta es la clase padre o SuperClase
	protected:
		string nombre, especie;
	public:
		Canino(string nombre, string especie){
			this->nombre=nombre;
			this->especie=especie;
		}
	string getNombre() {return nombre;}
	string getEspecie() {return especie;}
};
class Perro : public Canino //Esta es la clase hija o SubClase
{
	private:
		string raza;
	public:
		Perro(string nombre, string especie, string raza):Canino(nombre,especie)
		{
			this->raza=raza;
		}
		string getRaza(){return raza;}
};

int main (){
	Perro *P1=new Perro("Toby", "Perro", "Pastor Belga");
	
	cout << "Se ha ingresado a " << P1->getNombre() << endl;
	cout << "Cuya especie es " << P1->getEspecie() << endl;
	cout << "Y su raza es " << P1->getRaza() << endl;	
} 
//Yeny Diaz
