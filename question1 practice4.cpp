#include <iostream> 
using namespace std; 
	int main() {  
		float num1,num2;
		cout<<"enter the first desimal number:";
		cin>>num1;
		cout<<"enter the second desimal number:";
		cin>> num2;
		float sum=num1+num2;
		float difference=num1-num2; 
		float product=num1*num2;
		float remainder=(int)num1%(int)num2; 
		cout<<"sum:"<<sum<<endl;
		cout<<"difference:"<<difference<<endl;
		cout<<"product:"<<product<<endl;
		cout<<"remainder of division:"<<remainder<<endl;
		return 0;
	} 