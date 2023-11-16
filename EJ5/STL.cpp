#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;


int main(){

    vector<int> numeros;
    numeros.push_back(10);
    numeros.push_back(20);
    numeros.push_back(30);

    cout<< "Vector: ";
    for(const auto& num : numeros){
        cout<< num<< " ";
    }
    cout<< "\n";

    map<string, int> edad;

    edad["Ghali"] = 25;
    edad["Tobey Maguire"] = 30;
    edad["Andrew Garfield"] = 22;

    cout<< "Map (Clave, Valor): ";
    for(const auto& pareja : edad){
        cout<< "("<< pareja.first<< ", "<< pareja.second<< ") ";
    }
    cout<< "\n";



}