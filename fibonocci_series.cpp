#include<iostream>
using namespace std;

// recursive non-tail fibonnoci or head fibonnoci series function
void head_fib(int n,int a,int b,int count)
{
	int temp=a;
	if (count==n)
		return;

	cout<<b<<" ";
	count+=1;
	a=b;
    b=temp+b;
    head_fib(n,a,b,count);
}

// recursive tail fibonnoci series function
void tail_fib(int n,int a,int b,int count)
{
	int temp=a;
	if (count==n)
		return;

	cout<<b<<" ";
    tail_fib(n,b,temp+b,++count);
}

int fib_term(int n)
{
	if (n==0)
		return 0;
	if (n==1)
		return 1;

	int ans=fib_term(n-1)+fib_term(n-2);
	return ans;
}

int main(int argc, char const *argv[])
{
	int n;
	int a=0,b=1;
	int count=1;
	cout<<"Enter N= ";
	cin>>n;
	cout<<a<<" ";
	tail_fib(n,a,b,count);
	cout<<endl<<a<<" ";
	head_fib(n,a,b,count);
	int ans=fib_term(n-1);
	cout<<endl<<n<<"th term: "<<ans;
	return 0;
}