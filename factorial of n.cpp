//factorial of given number using recursion
#include<iostream>
using namespace std;
int fact(int);// function declaration
int fact(int num)//function definition
{
	//base condition
	if(num==0 || num==1){
		return 1;
	}
	else{
		return num*fact(num-1);//recursive function
	}
}
main()
{
	int n;
	cout<<"enter n value: ";
	cin>>n;
	cout<<"factorial of "<<n<<"is: "<<fact(n);//function call
}
