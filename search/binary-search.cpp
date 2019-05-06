#include<iostream>
#include<vector>
using namespace std;
bool BinarySearch(int,vector<int>,int,int);
int main(){
	cout<<"hello word"<<endl;
	vector<int> vec;
	vec.push_back(-1);
	for(int i=1; i<=100; i++){
		vec.push_back(i);
	}
	bool is_in = BinarySearch(1000, vec, 1, vec.size()-1);
	if(is_in){
		cout<<"ok"<<endl;
	}
	return 0;
}

bool BinarySearch(int target, vector<int> a, int start, int end) {
	int middle =(start + end) / 2;
	if(start > end){
		return false;
	}
	if(a[middle] == target){
		cout<<"i found you "<<a[middle]<<endl;
		return true;
	}
	if(a[middle] > target){
		return BinarySearch(target, a, start, middle-1);
	}
	if(a[middle] < target){
		return BinarySearch(target, a, middle+1, end);
	}
}
