#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

int main()
{
	int N, D;
	vector<float>w;	
	vector<float>p;
	vector<float>m(1000, 0); 
	cin >> N >> D;
	int i;
	float t;
	for(i=0; i<N; i++)
	{
		cin >> t;
		w.push_back(t);
	}
	for(i=0; i<N; i++)
	{
		cin >> t;
		p.push_back(t);
	}
	for(i=0; i<N; i++)
	{
		m[i] = p[i] / w[i];
	}
	int flag;
	int d, dt;
	d = D;
	float result = 0;
	
	while(1)
	{
		t = 0;
		for(i=0; i<N; i++)
		{
			if(m[i] > t)
			{
				flag = i;
				t = m[i];
			}
		}
		dt = d;
		d = d - w[flag];
		if(d<=0)
		{
			result += dt * m[flag];
			break;
		}
		else
		{
			if(t==0)
				break;
			result += p[flag];
			m[flag] = 0;
		}
	}
	printf("%.2f\n", result);
	return 0;
} 
