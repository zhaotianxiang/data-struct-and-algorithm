#include<iostream>

using namespace std;

int binarySearch(int *a, int low, int high, int key)
{
    while(low <= high)
    {
        int mid = (low + high) / 2;
        if(a[mid] < key) low = mid + 1;
	    if(a[mid] > key) high = mid - 1;
		if(a[mid] == key) return mid;
    }
    return -1;
}

int main()
{
    int a[] = {0,1,2,3,4,5,6,7,8,9,1000};
    int result = binarySearch(a, 0, 10, 1);
    cout << result << endl;
    return 1;
}
