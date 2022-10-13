#include<stdio.h>
int stack[10],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
int main()
{
top=-1;
printf("\n Enter the size of Array:");
scanf("%d",&n);
printf("\n\t Array operations");
printf("\n\t 1.ADD\n\t 2.REMOVE\n\t 3.DISPLAY\n\t 4.EXIT");
do
{
printf("\n Enter your Choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
push();
break;
}
case 2:
{
pop();
break;
}
case 3:
{
display();
break;
}
case 4:
{
printf("\n\t EXIT");
break;
}
default:
{
printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
}
}
}
while(choice!=4);
return 0;
}
void push()
{
if(top>=n-1)
{
printf("\n\tArray is full");
}
else
{
printf(" Enter a value to be added:");
scanf("%d",&x);
top++;
stack[top]=x;
}
}
void pop()
{
if(top<=-1)
{
printf("\n\t Array is empty");
}
else
{
printf("\n\t The removed elements is %d",stack[top]);
top--;
}
}
void display()
{
if(top>=0)
{
printf("\n The elements in array \n");
for(i=top; i>=0; i--)
printf("\n%d",stack[i]);
printf("\n Press Next Choice");
}
else
{
printf("\n Empty");
}
}