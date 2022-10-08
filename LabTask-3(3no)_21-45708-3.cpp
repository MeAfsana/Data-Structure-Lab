#include<iostream>
using namespace std;
struct Employee{
int id;
int joiningyear;
int salary;

};
int main()
{
Employee emp[10];
for(int a=0;a<10;a++)
{
cout<<"Employee number "<<a+1<<" ID: ";
cin>>emp[a].id;
cout<<"JOINING YEAR FOR EMPLOYEE NUMBER "<<a+1<<": ";
cin>>emp[a].joiningyear;
cout<<"SALARY FOR EMPLOYEE NUMBER "<<a+1<<": ";
cin>>emp[a].salary;
cout<<endl;


}
cout<<"EMPLOYEE WHO HAS JOINED BEFORE 2009"<<endl;


for(int a=0;a<10;a++)
{
if( emp[a].joiningyear<2009)
{

cout<<"EMPLOYEE NUMBER "<<a+1<<" "<<"ID: "<<emp[a].id<<endl;
}
}
cout<<endl;
cout<<"EMPLOYEE SALARY MORE THAN 20000"<<endl;
for(int a=0;a<10;a++)
{
if( emp[a].salary>20000)
{

cout<<"EMPLOYEE NO "<<a+1<<" "<<"ID: "<<emp[a].id<<endl;
}
}
}
