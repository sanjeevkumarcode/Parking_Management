#include<stdio.h>
#include<conio.h>
int Menu();
void Bus();
void Riksha();
void Cycle();
void Showdetail();
void Delete();
int nor=0,nob=0,noc=0,amount=0,count=0;
int main()
{
while(1)
{
switch(Menu())
{
case 1:
    Bus();
    break;
case 2:
    Cycle();
    break;
case 3:
    Riksha();
    break;
case 4:
    Showdetail();
    break;
case 5:
    Delete();
    break;
//case 6:
    //exit(0);
    //break;
default:
    printf("\nInvalid Choice");
}
getch();
}
}
int Menu()
{
    int ch;
    printf("\n1.Enter Bus");
    printf("\n2.Enter Cycle");
    printf("\n3.Enter Riksha");
    printf("\n4.Show Details");
    printf("\n5.Delete Data");
    printf("\n6.For Exiting");
    printf("\n\nEnter your choice:");
    scanf("%d",&ch);
    return ch;
}
void Delete()
{
    nob=0;
    noc=0;
    nor=0;
    amount=0;
    count=0;
}
void Showdetail()
{
   printf("\nNumber of Bus=%d",nob);
   printf("\nNumber of Cycle=%d",noc);
   printf("\nNumber of Riksha=%d",nor);
   printf("\nTotal number of Vechile=%d",count);
   printf("\nTotal gain amount=%d\n",amount);
}
void Riksha()
{
    printf("\nEntery Successfully\n");
    nor++;
    amount=amount+50;
    count++;
}
void Cycle()
{
       printf("\nEntery Successfully\n");
    noc++;
    amount=amount+20;
    count++;
}
void Bus()
{
       printf("\nEntery Successfully\n");
    nob++;
    amount=amount+100;
    count++;
}
