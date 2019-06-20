#include<iostream>
using namespace std;
// 快速排序口诀： 快控初始化  三循环  二赋值  一递归

void sort(int a[], int left, int right)
{
	// 控制 segmentfault
	if(left >= right)
	{
		return;
	}

	// 初始化
    int i = left;
    int j = right;
    int key = a[left];

    while(i<j)
    {
        // 向左找小的， a左 = a右
        while(i<j && key <= a[j]) j--;
        a[i] = a[j];

		// 向右找大的， a右 = a左
        while(i<j && key >= a[i]) i++;
        a[j] = a[i];

    }

	// key 值赋给左面
    a[i] = key;

	// 递归执行
    sort(a,left,i-1);
    sort(a,i+1,right);

}

int main()
{
    int a[] = {9,8,7,6,5,4,3,2,1};
    sort(a, 0, sizeof(a)/sizeof(a[0])-1);
    for(int i =0; i < sizeof(a)/sizeof(a[0]); ++i)
    {
		cout << a[i] << endl;
    }
}
