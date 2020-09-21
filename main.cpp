#include<iostream>

using namespace std;

class Ponteiros
{
public:
	Ponteiros(int);
	void imprimir() const;

private:
	int valor;
};

Ponteiros::Ponteiros(int v)
{
	valor = v;
}

void Ponteiros::imprimir() const
{
	cout << "Valor = " << valor << endl;
	cout << "Valor = " << this->valor << endl;
	cout << "Valor = " << (*this).valor << endl;
 
}

int main()
{
	Ponteiros p(50);
	p.imprimir();

	system("pause");
	return 0;
}

