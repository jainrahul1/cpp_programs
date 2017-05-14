/*
 * https://www.hackerrank.com/challenges/box-it
 */
#include <iostream>
using namespace std;

class Box {
	private:
		long l;
		long b;
		long h;
	public:
		Box();
		Box(long i, long j, long k);
		Box(const Box& obj);
		long getLenght(void);
		long getBreadh(void);
		long getHeight(void);
		long long CalculateVolume(void);
		bool operator<(Box& b);
		friend ostream& operator<<(ostream& out, Box& B) {
		    out << B.l << " " << B.b << " " << B.h;
			return out;
		}
};

Box::Box() {
	l = 0;
	b = 0;
	h = 0;
}

Box::Box(long i, long j, long k) {
	l = i;
	b = j;
	h = k;
}

Box::Box(const Box& obj) {
	l = obj.l;
	b = obj.b;
	h = obj.h;
}

bool Box::operator<(Box& b) {
	if (this->l < b.l) {
		return true;
	} else if (this->b < b.b && this->l == b.l) {
		return true;
	} else if (this->h < b.h && this->l == b.l && this->b == b.b) {
		return true;
	}
	return false;
}

long Box::getLenght(void) {
	return l;
}
long Box::getBreadh(void) {
	return b;
}
long Box::getHeight(void) {
	return h;
}
long long Box::CalculateVolume(void) {
	return (l * b * h);
}

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}
	}
}

int main()
{
	check2();
}

