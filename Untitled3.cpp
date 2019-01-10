#include<iostream>
using namespace std;

int main()
{
	float tienvon, laisuat, tienkivong;
	int nam=0;
	cout<<"Nhap so tien ki vong: "<<endl;
	cin>>tienkivong;
	cout<<"Nhap so tien ban dau: "<<endl;
	cin>>tienvon;
	cout<<"Nhap lai suat(%) theo nam: "<<endl;
	cin>>laisuat;
	
	while(tienvon<tienkivong)
	{
		tienvon=(tienvon*laisuat/100)+tienvon;
		nam++;
	}
	cout<<nam;
	return 0;
}
