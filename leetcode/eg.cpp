#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> gi, ei;
    for(int i=2; i<=60; i++)
    {
        int sum = 0;
        for(int j= i/2; j >0; j--)
        {
            if(i%j == 0)
            {
                sum+=j;
            }
        }
        if(sum == i)
        {
            ei.push_back(i);
        } else {
            gi.push_back(i);
        }

    }

    cout << endl;

    cout << "E:";
    for(int i =0; i<ei.size(); i++)
    {
        cout << ei[i]<<' ';
    }

    cout << endl;

    cout << "G:";
    for(int i=0; i<gi.size(); i++)
    {
        cout << gi[i]<<' ';
    }
}
