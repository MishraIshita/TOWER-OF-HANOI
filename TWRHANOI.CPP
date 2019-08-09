#include<iostream.h>
#include<conio.h>

int move;

void hanoi(int n,char beg,char aux,char des)
{

 if(n==0)
    return;
 else
    hanoi(n-1,beg,des,aux);
    move++;
    cout<<beg<<"->"<<des<<'\n';

    hanoi(n-1,aux,beg,des);

 }
}



void main()
{ clrscr();
int n;
cout<<"enter the no. of elements";
cin>>n;
hanoi(n,'A','B','C');
cout<<move;
getch();
}



