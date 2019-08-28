#include<iostream>
#include<string>
#include<vector>

// C++ 中字符串操作的成员函数
// 1. find 函数： 查找子字符串出现的第一个位置
// 2. string substr (size_t pos = 0, size_t len = npos) const;

using namespace std;

vector<string> split(const string &str, const string &pattern)
{
	vector<string> ret;

	if(str == "")
		return ret;
	// 需要两个初始化， 一是 字符串 二是 pattern
	// 直接找到第一个位置看是不是最后一个，循环找， 循环切除。
	string strs = str + pattern;
    size_t pos = strs.find(pattern);
	while(pos != strs.npos)
	{
		ret.push_back(strs.substr(0,pos));
		strs = strs.substr(pos+1, strs.size());
		pos = strs.find(pattern);
	}

	return ret;

}
int main()
{
	string s;
	while(cin >> s)
	{
	    vector<string> v = split(s, ",");
		for(int i=0; i!=v.size(); ++i)
		{
			for(int j=0; j<v[i].size() ; ++j)
			{
				cout << v[i][j] << ' ';
			}
			cout << endl;
		}
	}
	return 0;
}
