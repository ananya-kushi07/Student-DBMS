#include<bits/stdc++.h>
using namespace std;
class student
{ public: 
string name;
string usn;
void nameandusn()
{

cin>>name>>usn;
}
void displaynameandusn()
{
    cout<<name<<":"<<usn<<endl;
}
float calculate_marks(int a,int b,int c);

bool pf(float d)
{
    if(d>=40.00)
    return true;
    else 
    return false;
}

void entrance_exam();

};
float student::calculate_marks(int a,int b,int c)
{
   float percentage=((a+b+c)/3);
   cout<<"THE MARKS ARE:"<<a<<" "<<b<<" "<<c<<endl;
   return percentage;
}

void student::entrance_exam()
{
    int rank;
    cin>>rank;
    if(rank>=5000&&rank<=15000)
    cout<<"STUDENT IS ALLOTTED TO CS SEAT"<<endl;
    else if(rank>15000&&rank<=30000)
    cout<<"STUDNET IS ALLOTTED TO IS SEAT\n";
    else
    cout<<"STUDENT IS ALLOTTED WITH EC SEAT\n";
}

int main()
{
    student s;
     cout<<"WELCOME TO STUDENT DATA BASE MANAGEMENT SYSTEM!"<<endl;
     
     int num=2;
     while(num--)
     {
        cout<<"\n ENTER YOUR NAME AND USN:"<<endl; 
        s.nameandusn();
        s.displaynameandusn();

        cout<<"ENTER THE MARKS OF 3 SUBJECTS:"<<endl;
        int m1,m2,m3;
        cin>>m1>>m2>>m3;
        float res = s.calculate_marks(m1,m2,m3);

        if(s.pf(res))
        cout<<"pass"<<" "<<"Percentage is:"<<res<<endl;
        else
        cout<<"fail\n";

        cout<<"ENTER YOUR ENTRANCE EXAM RANK:\n";
        s.entrance_exam();
        
     }
  
     


    return 0;
}