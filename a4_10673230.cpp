#include <iostream>
using namespace std;
int gcd(int x,int y) {
	
	if (x==0)
return y;
	 return gcd(y%x,x) ;	

}
int main()
{
	int a ;int b;
	cout <<"Enter a value for a and b"<<endl;
	cin>> a >> b ;
	cout <<"the greatest commonfactor is"<< gcd(a ,b);

	return 0;
}
