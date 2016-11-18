
#include <iostream>
#include <conio.h>

double sum ( float a, float b )
{
return a+b; 
}

double sub (float a, float b)

{ 
return a-b;
}

double mult (float a, float b)
{
	return a*b;
}

double div (float a, float b)
{
	return a/b;
}

double pow (float a)
{
	unsigned int extent = 5;
	float a2 = a;

	for (int i=1; i< extent; i++) 
	{
	a *= a2;
	}

	return(float) a;
}

	double sqrt (float a)
{	
	double n=0.0;
	double t=0.0;
	while ((t-n)>0.000001 && (t-n)<-0.000001)
	{
		double (t= (n+a/n)/2);
		t = n;

	}
		
	return  t;
}
int main(void)
{
float a = 7.0;
float b = 10.0;
 cout <<"a+b = " << sum(a,b) << endl;
 cout <<"a-b = " << sub(a,b) << endl;
 cout <<"a*b = " << mult(a,b) << endl;
 cout <<"a/b = " << div(a,b) << endl;
 cout <<"a^b = " << pow(a) << endl;
 cout <<"sqrt a = " << sqrt(a) << endl;
 return 0;
 } 
