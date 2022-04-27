#include <stdio.h>
#include <string.h>
int main()
{
	char ch[100];
	printf("\nEnter the string =");
	gets(ch);
	if(ch[0]=='i')
	{
		int a[3][2]={0};
		int s=0,k=0,I;
		a[0][0]=1;
		a[1][1]=2;		
		while(k<strlen(ch)&&s!=-1)
		{
			if(ch[k]=='i') I=0;
			if(ch[k]=='f') I=1; 
			s=a[s][I];
			k+=1;
		}
		if(s==2) printf("\nThe keyword is if'");
		else printf("\n The string is not the control statement keyword");
	}
	else if(ch[0]=='f')
	{
		int a[4][3],s=0,k=0,I;
		a[0][0]=1;
		a[1][1]=2;
		a[2][2]=3;
		while(k<strlen(ch)&&s!=-1)
		{
			if(ch[k]=='f') I=0;
			if(ch[k]=='o') I=1;
			if(ch[k]=='r') I=2;
			s=a[s][I];
			k+=1;
		}
		if(s==3) printf("\nThe keyword is 'for'");
		else printf("\n The string is not the control statement keyword");
	}
	else if(ch[0]=='w')
	{
		int a[6][5]={0};
		int s=0,k=0,I;
		a[0][0]=1;
		a[1][1]=2;
		a[2][2]=3;
		a[3][3]=4;
		a[4][4]=5;
		while(k<strlen(ch)&&s!=-1)
		{
			if(ch[k]=='w') I=0;
			if(ch[k]=='h') I=1;
			if(ch[k]=='i') I=2;
			if(ch[k]=='l') I=3;
			if(ch[k]=='e') I=4;
			s=a[s][I];
			k+=1;
		}
		if(s==5) printf("\nThe keyword is 'while'");
		else printf("\n The string is not the control statement keyword");
	}
	else printf("\nstring is not the control statement keyword");
	return 0;
}
