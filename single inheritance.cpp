//single inheritance
#include<iostream>
using namespace std;
class parent
{
	public:
		string city;
		parent(string c)
		{
			city=c;
		}
};
class child:public parent
{
	public:
		child(string c):parent(c)
		{
			
		}
    void display()
    {
    	cout<<"city"<<" "<<city<<endl;
	}
};
main()
{
	child c("srikakulam");
	c.display();
}
