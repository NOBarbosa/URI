#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string classe; // classe[vertebrado ou invertebrado]
		cin >> classe;
	string ordem; //ave, mamifero...
		cin >> ordem;
	string dieta; // carnívoro, onivoro...
		cin >> dieta;
	
	if(classe == "vertebrado"){
		if(ordem == "ave"){
			if(dieta == "carnivoro"){
				cout << "aguia" << endl;
			}
			else{
				cout<< "pomba" << endl;
			}
		}
		else if(ordem == "mamifero"){
			if(dieta == "onivoro"){
				cout << "homem"<< endl;
			}
			else{
				cout << "vaca" << endl;
			}
		} 
		}
	else if(classe == "invertebrado"){
		if(ordem == "inseto"){
			if(dieta ==" hematofago"){
				cout << "pulga" << endl;
			}
			else{
				cout << "lagarta" << endl;
			}
		}
		else if(ordem == "anelideo"){
			if(dieta == "onivoro"){
				cout << "minhoca" << endl;
			}
			else{
				cout << "sanguessuga" << endl;
			}
		}
	}
	return 0;
	}
