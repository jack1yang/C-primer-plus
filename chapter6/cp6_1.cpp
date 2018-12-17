#include<iostream>
#include<cctype>
using namespace std;

int main()
{
	cout<<"You can type a source code,and enter @ to quit"<<endl;
	char ch;
	cin.get(ch);
	while(cin && (ch!='@'))
	{
		if(isalpha(ch))
		{
			if(islower(ch))
				ch=toupper(ch);
			else
				ch=tolower(ch);
		}
		cout<<ch;
		cin.get(ch);
	}
	return 0;
}
