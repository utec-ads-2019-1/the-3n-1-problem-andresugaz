#include <iostream>
#include <stdio.h>
#include <stdlib.h>


using namespace std;
int Algoritmo (long);

int Algoritmo(long n) {
	int i=1;
  while (n!=1) 
  {
  	if (n%2!=0) n=3*n+1;
  	else n=n*0.5;
  	i++;
  } 
  return i;
}

int main(int argc, char *argv[]) 
    {
	unsigned int mayor,menor;
	while((scanf("%d %d", & menor, & mayor))==2)
	{
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
		if (Algoritmo(menor)>=maxciclo) 
		{
			maxciclo=Algoritmo(menor);
		}
	}
	cout<<menor1<<" "<<mayor1<<" "<<maxciclo<<endl;
    }
    return 0;
}

