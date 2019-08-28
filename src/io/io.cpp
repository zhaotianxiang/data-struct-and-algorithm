#include<iostream>
#include<string>

using namespace std;

int main()
{
	char str[100];
/**
	// 1. C++ 第一种输入方式， 输入的string
	while(cin >> str ) // 这种 cin >> str 是以空格的方式输入到了string中
	{
		cout << str << endl;
		
		// (1) string 的第一种遍历方式， 最传统的遍历方式
		for(int i = 0; i < str.size(); ++i)
		{
			cout << str[i] << endl;
		}

		// (2) for each 遍历方式
		for(char& i : str)
		{
			cout << i << endl;
		}

		// (3) 迭代器循环
		for(iterator<string> i = str.begin(); i!=str.end(); ++i)
		{

			cout << i << endl;
		}
	}
**/

	// 2. C++ 第二种输入方式， 直接获取一整行到字符串数组当中
	// istream& getline (char* s, streamsize n )
	//while(cin.getline(str, 100))
	//{
	//	cout << str << endl;
	//}
	string s;
	getline(cin, s);
	for(int i=0; i<s.size(); ++i){
	
		cout << s[i] << " ";
	}

	return 0;
}
