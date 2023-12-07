#include<stdio.h>

int main()
{
	int arr[5],top=-1,i,ch,ele;
	do
	{
		printf("\n1] Push\n2] Pop\n3] TOS\n4] Traverse\n5] Exit\n");
		printf("\nEnter Your Choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				if(top==4)
				{
					printf("\nStack Overflow");
				}
				else
				{
					printf("\nEnter Data Element:");
					scanf("%d",&ele);
					top=top+1;
					arr[top]=ele;
				}
				break;
			case 2:
				if(top==-1)
				{
					printf("\nStack Underflow");
				}
				else
				{
					printf("\nDeleted Element: %d",arr[top]);
					top=top-1;
				}
				break;
			case 3:
				printf("\nTop of Stack :%d",arr[top]);
				break;
			case 4:
				
					if(top==-1)
				{
					printf("\nStack is empty");
				}
				else
				{
					for(i=0;i<=top;i++)
					{
						printf("%d\t",arr[i]);
					}
				}
				break;
			case 5:
				break;
			default:printf("\nInvalid Choice !!!");
		}
		
	}while(ch!=5);
	return 0;	
}
