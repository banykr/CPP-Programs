#include<hk.h>
class book
{
int book_no;
char book_title[20];
float price;
float total_cost(int);
public:
void input();
void purchase();

};


void book::input()
{
cout<<"\nENTER BOOK NUMBER : ";
cin>>book_no;
cout<<"\nENTER BOOK TITLE : ";
gets(book_title);
cout<<"\nENTER THE COST OF A BOOK (IN ₹) : ";
cin>>price;
}

float book::total_cost(int x)
{
return(x*1.0*price);
}

void book::purchase()
{
cout<<"\n\nENTER THE NO OF COPIES TO BE PURCHASED : ";
int n=0;
cin>>n;
float p=total_cost(n);
cout<<"\nTOTAL PRICE TO BE PAID IS : ₹"<<p;
}


void main()
{
book b1,b2;
b1.input();
b1.purchase();
getch();
_exit(0);
}
