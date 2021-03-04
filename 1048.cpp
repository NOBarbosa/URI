#include <iostream>

using namespace std;

int main(){
	
	double salario, reajuste, novo_salario;
	int per;
	cin >> salario;
	cout.precision(2);
	cout.setf(ios::fixed);
	
	if(salario <= 400.00){
		reajuste = salario*0.15;
		novo_salario = salario + reajuste;
		per = 15;
	}
	else if(salario > 400.00 && salario <= 800.00){
		reajuste = salario*0.12;
		novo_salario = salario + reajuste;
		per = 12;
	}
	else if(salario > 800.00 && salario <= 1200.00){
		reajuste = salario*0.10;
		novo_salario = salario + reajuste;
		per = 10;	
	}
	else if(salario > 1200.00 && salario <= 2000.00){
		reajuste = salario*0.07;
		novo_salario = salario + reajuste;
		per = 7;
	}
	else if(salario > 2000.00){
		reajuste = salario*0.04;
		novo_salario = salario + reajuste;
		per = 4;
	}
	
	cout << "Novo salario: " << novo_salario << endl;
	cout << "Reajuste ganho: "	<< reajuste << endl;
	cout << "Em percentual: "<< per << " %" << endl;
	
}