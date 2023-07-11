#include<iostream>
using namespace std;
double evaluatePolynomial();
int main()
{
	double result = evaluatePolynomial();
	cout<<"Output: "<<result;
	
return 0;
}

double evaluatePolynomial()
{
	double x, coeff, val, sum=0;
	int n;
	
	cout<<"Enter value of x\n";
	cin>>x;
	cout<<"Enter highest power of x"<<endl;
	cin>>n;
	cout<<"Enter "<<n+1<<" coefficients in descending order of power"<<endl;
	
	
	if (n>0)
	{
	while (n >= 0)
	{
		double pow=1;
		for (int i=1; i <=n; i++)
		{
			pow *= x;
		}
		
		cin>>coeff;
		val = coeff*pow;
		sum += val;
		n -= 1;
	}
	}
	
	else if (n = 0)
	{
	cin>>coeff;
	sum = coeff;
	}
	
	else 
		cout<<"Error";
	
return sum;
}
	
		
