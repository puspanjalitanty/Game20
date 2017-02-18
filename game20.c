#include<stdio.h>
#include<string.h>
int main()
{	int c=0,n,k,l,d,a[3],i,j;
	char s[10];
	printf("\n");
	while(1)
	{	printf("Player 1 : ");
		gets(s);	//maximum 3
		l=strlen(s);
		k=0;
		d=0;
		for(i=0;i<=l;i++)
		{	if(s[i]!=' ' && s[i]!='\0')
				d++;
			else
			{	a[k]=0;
				for(j=i-d;j<i;j++)
				a[k]=(a[k]*10)+s[j]-48;
				d=0;
				k++;
			}
		}
		c+=k;
		printf("\nProgram : ");
		/*switch(c)
		{	case 1:case 5:case 9:case 13:case 17:	printf("%d %d %d",c+1,c+2,c+3);
								c+=3;
								break;
			case 2:case 6:case 10:case 14:case 18:	printf("%d %d",c+1,c+2);
								c+=2;
								break;
			case 3:case 7:case 11:case 15:case 19:printf("%d",c+1);
								c+=1;
								break;
			case 20:printf("Congratulations!!");		//Poor line...it is not going to be executed ever 
				return 0;
		}*/
		k=c;	//create a duplicate of c (since c is changing in the body of for loop,it can't be used in the condition for i)
		for(i=1;i<=(4-(k%4));i++)
		{	c++;
			printf("%d ",c);
		}
		printf("\n\n");
		if(c==20)
		{	printf("YOU LOST\n\n");
			break;
		}
	}
	return 0;
}
