#include <stdio.h>
#include <string.h>
#include <algorithm>

struct Student
{
	char name[11];
	int a,b,c;
	
	void get()
	{
		scanf("%s %d %d %d",name,&a,&b,&c);
	}
	
	bool operator<(const Student& s) const
	{
		if(a==s.a)
		{
			if(b==s.b)
			{
				if(c==s.c) return strcmp(name,s.name)<0;
				return c>s.c;
			}
			return b<s.b;
		}
		return a>s.a;
	}
}s[100000];

int main()
{
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++) s[i].get();
	std::sort(s,s+n);
	for(i=0;i<n;i++) puts(s[i].name);
	return 0;
}