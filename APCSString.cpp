#include<iostream>
#include<cstring>
using namespace std;

int is_lower(int c)
{
	if(c<=int('z')&& c>=int('a'))
	{
		return 1;
	}
	else if(c<=int('Z')&&c>=int('A'))
	{
		return 0;
	}
	else
	{
		return -1;
	}
}

int max(int a,int b)
{
	if(a>=b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int main()
{
	int k;
	char str[100000];
	cin>>k;
	cin>>str;
	int lower=0,upper=0;
	int max_len=0,c_len=0;
	int lower_letter=-1;
	for(int i=0;i<strlen(str);i++)
	{
		if(is_lower(str[i])&&lower_letter)
		{
			upper=0;
			lower++;
			if(lower==k)
			{
				c_len+=k;
				max_len=max(max_len,c_len);
			}
			if(lower>k)
			{
				c_len=k;
			}
			//lower_letter=1;
		}
		else if(is_lower(str[i])&&!lower_letter)
		{
			if(upper<k)
			{
				c_len=0;
			}
			upper=0;
			lower=1;
			if(lower==k)
			{
				c_len+=k;
				max_len=max(max_len,c_len);
			}
			lower_letter=1;
		}	
		else if(!is_lower(str[i])&&lower_letter)
		{
			if(lower<k)
			{
				c_len=0;
			}
			upper=1;
			lower=0;
			if(upper==k)
			{
				c_len+=k;
				max_len=max(max_len,c_len);
			}
			lower_letter=0;
		}	
		else if(!is_lower(str[i])&&!lower_letter) 
		{
			upper++;
			lower=0;
			if(upper==k)
			{
				c_len+=k;
				max_len=max(max_len,c_len);
			}
			if(upper>k)
			{
				c_len=k;
			}
		}
		
	}
	cout << max_len  << endl;
}
