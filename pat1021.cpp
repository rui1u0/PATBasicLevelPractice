#include <iostream>

using namespace std;

int main()
{
	int result[1000] = {0};
	string num;
	cin>>num;
	int i, len;
	len = num.length();
	for(i=0;i<len;i++)
	{
		result[(num[i] - '0')]++;
	}
	for(i=0;i<1000;i++)
	{
		if(result[i]!=0)
		{
			cout<<i<<':'<<result[i]<<endl;
		}
	}
	return 0;
} 
