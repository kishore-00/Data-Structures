#include<stdio.h>
#include<conio.h>
void main()
{int price[5],target,start,mid,end;
int i;
clrscr();
for(i=0;i<5;i++)
{printf("Enter the price %d:",i+1);
scanf("%d",&price[i]);
}
printf("Enter the target price:");
scanf("%d",&target);
start=0;
end =4;
for(i=0;i<5;i++)
{mid = (start+end)/2;
if(price[mid]==target)
{printf("The target price is located at %d",mid+1);
break;}
else if(target<price[mid])
{end = mid-1;
}
else if(target>price[mid])
{start = mid+1;}
else{
printf("The value is not present in the array");}
}
getch();
}