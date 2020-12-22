#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

struct mas
{
    char name[20];
    char autor[20];
    int god;
};
class bibl
{
private:
   mas knigi;
public:
   void in(bibl[],int&);
   void vyb(bibl[],int&);
   void poisk(bibl[],int&);
   void udal(bibl[],int&);
   void dobavl(bibl[],int&);
   void vivod(bibl[],int&);
};
int main()
{
    bibl a[10];
    int x=0;
    cout<<"Enter the number of books:\n";
        cin>>x;
    cout<<"Enter book title:\n";
        a[x].in(a,x);
    getch();
}
void bibl::in(bibl a[], int&x)
{
for(int i=0;i<x;i++)
   {
   cout<<"Name: ";
      cin>>a[i].knigi.name;
   cout<<"Autor: ";
      cin>>a[i].knigi.autor;
   cout<<"Year publication: ";
      cin>>a[i].knigi.god;
}
getch();
a[x].vyb(a,x);
}
void bibl::vyb(bibl a[],int&x)
{
int vybor=0;
do
{
cout<<"1-Search\n2-Delete\n3-Add book\n4-Show library\n5-Output\nYour choise:";
cin>>vybor;
   if(vybor==1)
      a[x].poisk(a,x);
   if(vybor==2)
      a[x].udal(a,x);
   if(vybor==3)
      a[x].dobavl(a,x);
   if(vybor==4)
      a[x].vivod(a,x);
}
while(vybor!=5);
}
void bibl::poisk(bibl a[],int&x)
{
int p=0,god=0;
char name[20],autor[20];
    cout<<"1-Name searching\n2-Autor searching\n3-Year searching\nYour choise:";
    cin>>p;
    if(p==1)
        {
        int f=0;
        cout<<"Enter title: ";
        cin>>name;
    for(int i=0;i<x;i++)
    {
        if(strcmp(name,a[i].knigi.name)==0)
           {
           cout<<a[i].knigi.name<<"     "<<a[i].knigi.autor<<"     "<<a[i].knigi.god<<endl;
           f++;
           }}
        if(f==0)
           cout<<"Don't have this book!"<<endl;
        getch();
        }
    if(p==2)
        {
        int h=0;
        cout<<"Enter Autorname: ";
        cin>>autor;
    for(int i=0;i<x;i++)
    {
        if(strcmp(autor,a[i].knigi.autor)==0)
           {
           cout<<a[i].knigi.name<<"     "<<a[i].knigi.autor<<"     "<<a[i].knigi.god<<endl;
           h++;
           }}
        if(h==0)
           cout<<"Don't have this book!"<<endl;
        getch();
        }
    if(p==3)
        {
        int g=0;
        cout<<"Year: ";
        cin>>god;
    for(int i=0;i<x;i++)
    {
        if(god==a[i].knigi.god)
           {
           cout<<a[i].knigi.name<<"     "<<a[i].knigi.autor<<"     "<<a[i].knigi.god<<endl;
           g++;
           }}
        if(g==0)
           cout<<"Don't have this book!"<<endl;
        getch();
        }
}
void bibl::udal(bibl a[],int&x)
{
int udal;
cout<<"What number of book witch want you to delete < "<<x<<endl;
    cin>>udal;
        if(x==1)
            cout<<"Invalid delete";
            strcpy(a[udal-1].knigi.name,a[x-1].knigi.name);
            strcpy(a[udal-1].knigi.autor,a[x-1].knigi.autor);
            a[udal-1].knigi.god=a[x-1].knigi.god;
            x--;
        cout<<"Deleted!\n"<<endl;
}
void bibl::dobavl(bibl a[],int&x)
{
   cout<<"Title: ";
      cin>>a[x+1].knigi.name;
   cout<<"Autor: ";
      cin>>a[x+1].knigi.autor;
   cout<<"Year: ";
      cin>>a[x+1].knigi.god;
    x++;
}
void bibl::vivod(bibl a[],int&x)
{
for(int i=0;i<x;i++)
   {
   cout<<a[i].knigi.name<<"     "<<a[i].knigi.autor<<"     "<<a[i].knigi.god<<endl;
   }
getch();
}
