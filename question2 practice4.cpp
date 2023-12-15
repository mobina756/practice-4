#include <iostream> 
using namespace std;
int main() { 
int x,y,z; 
std::cout<<"enter the value of x,y,and z:";
std::cin>>x>>y>>z;
int result1=(x-y)*(x+y) ;
int result2 =(x+y+z)*(x+y+z) +1;
std::cout<<"result1:"<<result1<<std::endl;
cout<<"result2:"<<result2<<std::endl;
return 0;
}
