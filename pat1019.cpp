#include <iostream>
#include <algorithm> 
#include <string>

using namespace std;

int main()
{
	int i;
	int num[4];
	string n;
	cin >> n;
	int l;
	l = n.length();
	while(l<4)
	{
		n = '0' + n;
		l = n.length();
	} 
	for(i=0;i<4;i++)
	{
		num[i] = n[i] - '0';
	}
	if(num[0]==num[1] && num[1]==num[2] && num[2]==num[3])
	{
		cout << n << " - " << n << " = " << "0000" << endl;
	}
	else
	{
		int a, b, c, d;
		do
		{
			sort(num, num+4, greater<int>());
			a = 0;
			b = 0;
			for(i=0;i<4;i++)
			{
				a = a*10 + num[i];
				b = b*10 + num[3-i];
			}
			c = a - b;
			printf("%04d - %04d = %04d\n", a, b, c);
			d = c;
			for(i=0;i<4;i++)
			{
				num[3-i] = c%10;
				c = c/10;
			}
		}while(d!=6174);	
	}
	return 0;
}
