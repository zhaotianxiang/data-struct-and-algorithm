#include<iostream>
#include<sstream>
#include<map>
#include<vector>
#include<string>
using namespace std;

vector<string> split(const string& s, char delimiter)
{
    vector<string> tokens;
    string token;
    istringstream tokenStream(s);
    while (getline(tokenStream, token, delimiter))
    {
        tokens.push_back(token);
    }
    return tokens;
}
int main()
{
    string str;
    map<string,int> m;
	getline(cin,str);

    vector<string> v = split(str,' ');

	for(vector<string>::iterator i=v.begin(); i!=v.end(); ++i)
    {
		m[*i] = ++m[*i];
    }

	for(auto const& i : m)
	{
		cout << i.first <<':'<< i.second << endl;
	}
}
