#include<stdio.h>
#include<conio.h>
int main()
{
	int t,a,b,c,d,e,f,g,i,j,l,m,n,r,s,x,sum,u;
	int z[x];
	long int k;
	float h;
	int temp;
	int more;
	int oo;
	printf("Enter your PASSWORD:");
	scanf("%d",&oo);
if(oo==555123555)
{
	do
{
    printf("Press 1 to find greatest and smallest number.\nPress 5 to play number game.\nPress 3 to find fectorial of any number.\nPress 4 to fined power of any number.\nPress 5 to fined leap year.\nPress 6 to find table of any number.\nPress 7 to check your grades in EXAMs\nPress 8 to find addition of numbers\n");
	scanf("%d",&t);
	if(t==1)
	{
		printf("Welcome....\nEnter number of numbers:");
		scanf("%d",&x);
		for(i=0;i<x;i++)
		scanf("%d",&z[i]);
		b=z[0];
		for(i=0;i<x;i++)
		{
			if(z[i]>b)
			{
				b=z[i];
			}
		}
			printf("Greatest Number=%d",b);
				u=z[0];
			for(i=0;i<x;i++)
		{
			if(z[i]<u)
			{
				u=z[i];
			}
		}
	     printf("\nSmallest number=%d",u);
	}
	else if(t==2)
	{
		printf("Enter a number less than 10\n");
		scanf("%d",&g);
		switch(g)
		{
			case 1:
				printf("YOU HAVE ENTERED 1...");
				break;
			case 2:
			    printf("YOU HAVE ENTERED 2...");
			    break;
			case 3:
				printf("YOU HAVE ENTERED 3...");
				break;
			case 4:
				printf("YOU HAVE ENTERED 4...");
				break;
			case 5:
				printf("YOU HAVE ENTEED 5...");
				break;
			case 6:
				printf("YOU HAVE ENTERED 6...");
				break;
			case 7:
				printf("YOU HAVE ENTERED 7...");
				break;
			case 8:
				printf("YOU HAVE ENTERED 8...");
				break;
			case 9:
				printf("YOU HAVE ENTERED 9...");
				break;
			default:
			printf("YOU HAVE INTERED WRONG NUMBER...");
				
		}
	
	}
	else if(t==3)
	{
		printf("WELCOME......\nPlease enter a number\na=");
		scanf("%d",&a);
		k=1;
		for(i=1;i<=a;i++)
		{
        	k=k*i;
		}
		printf("Fectorial=%ld",k);
	}
	else if(t==4)
	{
		printf("WELCOME...\nPlease enter a number and exponent\nNumber=");
		scanf("%d",&l);
		printf("Exponent=");
		scanf("%d",&m);
		k=1;
		for(i=1;i<=m;i++)
		{
			k=k*l;
		}
		printf("Result=%d",k);
	}
	else if(t==5)
	{
		printf("WELCOME....\nPlease enter the year\n");
		scanf("%d",&m);
		if(m%4==0)
		printf("The year is leap year");
		else
		printf("The year is NOT leap year");
	}
	else if(t==6)
	{
		printf("WELCOME...\nPlease enter the number\nNumber=");
		scanf("%d",&n);
		for(i=1;i<=10;i++)
		{
			printf("%d*%d=%d\n",n,i,n*i);
		}
	}
	else if(t==7)
	{
		printf("WELCOME...\nPlease enter your marks as subjects are given\nProgramming=");
		scanf("%d",&a);
		printf("Islamiat=");
		scanf("%d",&b);
		printf("Basic Electronic=");
		scanf("%d",&c);
		printf("English=");
		scanf("%d",&d);
		printf("Calculus=");
		scanf("%d",&e);
		printf("ICT=");
		scanf("%d",&f);
    g=a+b+c+d+e+f;
    printf("TOTAL NUMBER=%d\n",g);
    h=g*100.0/180;
    printf("Your percentage =%f\n",h);
    if(h>80)
    printf("Grade is A+");
	if((h>=71)&&(h<=80))
	printf("Grade is A");
	if((h>=61)&&(h<=70))
	printf("Grade is B");
	if((h>=50)&&(h<=60))
	printf("Grade is C");
	if(h<50)
	printf("Grade is F");	
	}
	else if(t==8)
	{
		printf("Enter the number of number that you want to add:");
		scanf("%d",&x);
		for(i=0;i<x;i++)
		scanf("%d",&z[i]);
		sum=0;
		for(i=0;i<x;i++)
		sum+=z[i];
		printf("Sum=%d",sum);
	}
	printf("\nPress 1 if you want to redo\nPress 0 to EXIT\n");
		scanf("%d",&more);
}
     while(more==1);
	 printf("\n    ALI BadShaH..........");
}
	 else
	 printf("WRONG PASSWORD..........");
	 getch();	
}

