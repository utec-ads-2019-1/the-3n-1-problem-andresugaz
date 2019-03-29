#include <iostream>

using namespace std;
int input1,input2;
int Algoritmo (long);

int main() {
	int mayor,menor;
	cin>>menor;
	cin>>mayor;
	int menor1 = menor;
	int mayor1 = mayor;
		if (menor>mayor) 
	{
		int temp;
		temp=menor;
		menor=mayor;
		mayor=temp;
	}
	int maxciclo=-100;
	for(menor;menor<=mayor;menor++)
	{
		if (Algoritmo(menor)>maxciclo) 
		{
			maxciclo=Algoritmo(menor);
		}
	}
	cout<<menor1<<" "<<mayor1<<" "<<maxciclo;
    return 0;
}

int Algoritmo(long n) {
	int i=1;
  while (n!=1) 
  {
  	if (n%2!=0) n=3*n+1;
  	else n=n*0.5;
  	i++;
  } 
  cout<<endl;
  return i;
}

