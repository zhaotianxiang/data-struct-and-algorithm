#include<iostream>
#include<math.h>

using namespace std;

bool isPrime(int n)
{
	bool prime = true;
	
	for(int i=2; i<=sqrt(n); i++)
	{
		if(n%i == 0)
			prime = false;
	}

	return prime;
}

int fact(int n)
{
	if(isPrime(n))
		return 1;

	for(int i=2; i<=sqrt(n); ++i)
	{
		if(isPrime(i) && n % i == 0)
			return 1+fact(n/i);
	}
}

int main()
{
	int n;
	while(cin >> n)
	{
		cout << fact(n) << endl;
	}
	return 0;
}
