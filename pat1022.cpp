#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int a ,b, c, d;
	cin>>a>>b>>d;
	c=a+b;
	int r, k;
	r=c%d;
	vector<int>result;
	result.push_back(r);
	k=c/d;
	while(k!=0)
	{
		r=k%d;
		result.push_back(r);
		k=k/d;
	}
	int len;
	len=result.size();
	int i;
	for(i=len-1;i>=0;i--)
	{
		cout<<result[i];
	}
	cout<<endl;
	return 0;
} 
