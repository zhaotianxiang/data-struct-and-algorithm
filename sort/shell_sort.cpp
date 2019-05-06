#include<iostream>

using namespace std;

int shell_sort(int a[], int len)
{
	int steps = len / 2;

	for(int step = len/2; step > 0; step/=2)
	{
		// 步长 n/2 n/4 n/8
		for(int i = 0; i<step; ++i)
		{
			for(int j=i+step; j<len; ++j)
			{
				// 对每一个分组进行插入排序
				// 前面的值比后面的大
				if(a[j - step] > a[j]) 
				{
					int temp = a[j];
					int left = j - step;
					while(left >=0 && a[left] > temp)
					{
						a[left+step] = a[left];
						left -= step;
					}

					a[left] = temp;
				}
			}
		}
	}

}

int main()
{
	int a[] = {100,9,8,23,34,45,2,1,5,7,8,4,4,23,22,1,1};

	int len = sizeof(a)/sizeof(a[0]);

	shell_sort(a,len);

	for(int i =0; i<len; ++i)
	{
		cout << a[i] << endl;
	}

	return 0;
}
