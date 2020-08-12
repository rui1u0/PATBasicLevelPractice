#include <iostream>

using namespace std;

int main()
{
	int num[10];
	int i;
	for(i=0;i<10;i++)
	{
		cin>>num[i];
	}
	for(i=1;i<10;i++)
	{
		if(num[i]!=0)
		{
			cout<<i;
			num[i]--;
			break;
		}
	}
	int j;
	for(i=0;i<10;i++)
	{
		if(num[i]!=0)
		{
			for(j=0;j<num[i];j++)
				cout<<i;
			num[i]=0;
		}
	}
	return 0;
}
