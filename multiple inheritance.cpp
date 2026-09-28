#include<iostream>
using namespace std;
//multiple inhertance
class mother
{
	public:
		string bloodgroup;
		mother(string bg)
		{
			bloodgroup=bg;
		}
};
class father
{
	public:
		string surname;
		father(string sr)
		{
			surname=sr;
		}
};
class child:public mother,public father
{
	public:
	child(string bg,string sr):father(sr),mother(bg)
	{
		
	}
	void display()
	{
		cout<<"surname: "<<surname<<endl;
		cout<<"bloodgroup: "<<bloodgroup<<endl;
	}
};
main()
{
	child c("B+","Tangudu");
	c.display();
}

