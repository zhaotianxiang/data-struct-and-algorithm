#include<iostream>
#include<string>
using namespace std;

int max(int i, int j){
	return i > j ? i : j;
}

int lisLength(int * a, int len){
	if(len == 0){
		return 0;
	}

	if(len == 1){
		return 1;
	}

	int ans = 0;

	for(int i=0; i<len; ++i){
		cout << a[len]<< " " << a[i]<< endl;
		if(a[len] > a[i]){
			ans = max(ans, lisLength(a, i) + 1 );
		}
	}

	return ans;
}

int main() {

    int a[] = {1, 2, 3, 4, 5, 40, 50, 10, 20, 30, 40, 50};

    int len = lisLength(a, sizeof(a)/sizeof(int)-1)+1;

    cout << len << endl;

    return 0;
}

