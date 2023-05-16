// NAME : HARSHAL PATIL

#include<iostream>
using namespace std;
class Author
{
	protected :
		string author;
	public :	
		void getdata1()
		{
			cout<<"\n Enter Author Name : ";
			cin>>author;
		}
};
class Publisher
{
	protected :
		string publisher;
	public :	
		void getdata2()
		{
			cout<<"\n Enter Publisher Name : ";
			cin>>publisher;
		}
};
class book: public Author, public Publisher
{
	private :
		string bookn;
	public :	
		void getdata3()
		{
			cout<<"\n Enter Book Name : ";
			cin>>bookn;
		}
		void putdata()
		{
			cout<<"\n Author    : "<<author;
			cout<<"\n Publisher : "<<publisher;
			cout<<"\n Book      : "<<bookn<<endl;	
		}
};
int main()
{
	book obj;
	obj.getdata1();
	obj.getdata2();
	obj.getdata3();
	obj.putdata();
	return 0;
}
// OUTPUT
/*
 Enter Author Name : Harshal

 Enter Publisher Name : Navneet

 Enter Book Name : CPP

 Author    : Harshal
 Publisher : Navneet
 Book      : CPP   */