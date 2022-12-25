#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	//prime numbers
	int n,i,d;
	bool c=true;
	cout<<"Enter number: ";
	cin>>n;
	i=2;
	while(i<n)
	{
       d=n%i;
       if (d==0)
       {
       	c=false;
       	break;
       }
	i++;
	}

	if (c)
		cout<<"Prime Number"<<endl;
	else
		cout<<"Not Prime"<<endl;
	return 0;
}
