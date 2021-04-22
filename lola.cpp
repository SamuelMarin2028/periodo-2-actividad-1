#include<conio.h>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fstream>
#include<string>
using namespace std;
using std::ifstream;
using std::ofstream;

int samulindo(int lo){
	
	int lola;
	lola=lo/10;
	
	return lola;	
}
main()
{
	int pe;
	cout<<"porfavor ingrese el numero # :";
	cin>>pe;
	int li;
	li=samulindo(pe);
	
	cout<<"el numero de veces que el dies se encuentra en el numero diguitado es :"<<li;	
}
