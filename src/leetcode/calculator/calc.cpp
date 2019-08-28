#include<iostream>
#include<string>
#include<stack>
#include<map>

using namespace std;

int calc(string s){
	string ss  = s+"#";
	stack<int> numbers;
	stack<char> options;
	map<int, int> priority;

	priority['#'] = 0;
	priority['-'] = 1;
	priority['+'] = 1;
	priority['*'] = 2;
	priority['/'] = 2;

	options.push('#');

	for(int i=0; i<ss.size(); ++i){
		int ch = ss[i];

		if(ch <= '9' && ch >= '0'){
			// numbers
			int num = (int)ch - 48;
			cout << num << endl;
			numbers.push(num);
		}else{
			// options
			char top = options.top();
			if(priority[ch] >= priority[top]){
				options.push(ch);
			} else{
				// calc
				int num1 = numbers.top();
				numbers.pop();

				int num2 = numbers.top();
				numbers.pop();

				char opt = options.top();
				options.pop();

				int num3 = 0;

				switch(opt){
					case '+':
						num3 = num1 + num2;
						break;
					case '-':
						num3 = num1 - num2;
						break;
					case '*':
						num3 = num1 * num2;
						break;
					case '/':
						num3 = num1 / num2;
						break;
				}

				numbers.push(num3);
				options.push(ch);
			}
		}
		

	}
}

int main(){
	string s = "4+5*0";
	int result = calc(s);
	cout << result << endl;
	return 0;
}
