#include<iostream>
#include<algorithm> // swap(a,b);

using namespace std;

void max_heapify(int a[], int start, int end)
{
	// 最大堆调整算法
	// 父子初始化
	int dad = start;
	int son = dad * 2 + 1;

	// 子小等尾循环
	while(son <= end)
	{
		// 最大化子
		if(son+1 <= end && a[son] < a[son+1])
			son ++;
		// 父大子返回
		if(a[dad] > a[son])
			return;
		else{
			// 子大父交换
			swap(a[son],a[dad]);

			dad = son;
			son = dad*2 + 1;
		}
		
	}
}

void heap_sort(int a[], int len)
{
	// 后父开调
	for(int i= len/2-1; i>=0; --i)
	{
		max_heapify(a,i,len-1);
	}

	// 交换出来再调整
	for(int i=len-1; i>=0; --i)
	{
		swap(a[i],a[0]);
		max_heapify(a, 0, i-1);
	}
}

int main()
{
	int a[] ={200,2,3,4,6,8,9,0,10,0,50,2,33,55,6,7,8,323};
	int len = (int) sizeof(a)/ sizeof(a[0]);
	heap_sort(a,len);
	for(int i=0; i<len; ++i)
	{
		cout << a[i] << endl;
	}
	return 0;
}
