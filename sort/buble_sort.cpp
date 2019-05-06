#include<iostream>
using namespace std;

void buble(int *a, int length)
{
	for(int i = 0; i<length; ++i)
	{
		for(int j= i+1; j<length; ++j)
		{
			if(a[i]<a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

void print(int *a, int length)
{
	for(int i=0; i<length;++i)
	{
		cout << a[i] <<" ";
	}
	cout << endl;
}

int main()
{
	int a[10] ={2,4,31,5,6,8,945,547,9,0};
	buble(a,sizeof(a)/sizeof(a[0]));
	print(a,sizeof(a)/sizeof(a[0]));
	return 0;
}
