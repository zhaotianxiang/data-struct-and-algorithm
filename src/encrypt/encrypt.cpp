#include<iostream>
#include<set>
#include<map>

//最大的情况是： 26个字母的key + 26个字母 + '\0' = 53
#define KEY_MAX_LEN 53

using namespace std;

char* redundancy(const char *key)
{
    char* ans = new char[KEY_MAX_LEN];
    set<char> chSet;

    int i = 0;
    int j = 0;

    while(key[i] != 0)
    {
        if(chSet.count(key[i]) == 0)
        {
            chSet.insert(key[i]);
            ans[j++] = key[i];
        }
        i++;
    }
    ans[j] = 0;

    return ans;
}

void toBigger(char *str)
{
    int i=0;
    while(str[i] != 0)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i]-=32;
        }
        i++;
    }
}


void encrypt(const char* key, const char* data, char* encrypt)
{
    // 对应关系字典： map<明文字符, 密文字符>
    map<char, char> dict;
    // 去除重复的字符
    char *distinct = redundancy(key);

    toBigger(distinct);

    int i=0;
    while(distinct[i] != 0)
    {
        i++;
    }

    for(char ch='A'; ch<='Z'; ++ch)
    {
        distinct[i++] = ch;
    }
    distinct[i] = 0;

    char* mapping = redundancy(distinct);

    int len = 0;
    while(mapping[len] != 0)
    {
        len++;
    }

    // 构建替换算法的密码本， 对应字典
    for(int i=0; i<len; ++i)
    {
        // 大写字母对应关系
        dict.insert(make_pair((char)(i+'A'), mapping[i]));
        // 小写字母对应关系
        dict.insert(make_pair((char)(i+'a'), mapping[i]+32));
    }
    // 空白字符串对应
    dict.insert(make_pair(' ',' '));

    // 对数据按照密码本对应的关系进行加密
    int k=0;
    while(data[k]!=0)
    {
        encrypt[k] = dict[data[k]];
        k++;
    }
    encrypt[k] = 0;
}


int main()
{
    char word[] = "tRaILBLAZERs";
    char data[] = "Attack AT DAWN";
    char encode[sizeof(data)];

    encrypt(word, data, encode);

    cout <<"明文:"<< endl <<  data << endl << endl;
    cout <<"密文:" << endl << encode << endl;

    return 0;
}
