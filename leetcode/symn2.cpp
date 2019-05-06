#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void split(vector<int> &v, int n)
{
    if(n == 0)
    {
        return;
    }
    int vdata = n%10;
    n = n / 10;
    v.push_back(vdata);
    split(v,n);
}

bool isSYM(int num)
{
    vector<int> v;
    split(v,num);
    for(vector<int>::iterator i = v.begin(),j = v.end() - 1; i <= j; i++,j--)
    {
        if(*i != *j) {
            return false;
        }
    }
    return true;
}

void sloution(stack<int> &s, int n)
{
    if(n <= 0)
    {
        return ;
    }
    if(n && isSYM(n*n))
    {
        s.push(n);
        //cout << n*n <<endl;
    }
    return sloution(s,n-1);
}

int main()
{
    stack<int> s;
    sloution(s,256);
    while(!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }
}

