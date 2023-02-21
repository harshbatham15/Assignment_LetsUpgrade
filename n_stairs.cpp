#include<iostream>
using namespace std;
int compute(int n)
{
	int ans;
	// if stairs are less than one or null
	if (n<0)
		return 0;
	// if stairs are one in number
	if (n==0)
		return 1;
    // if stairs are greater than one
	ans=compute(n-1)+compute(n-2);

	return ans;
}

int main(int argc, char const *argv[])
{
	//n stairs
	int n,ans;
	cout<<"N= ";
	cin>>n;
	ans=compute(n);
	cout<<"total combinations: "<<ans;
	return 0;
}