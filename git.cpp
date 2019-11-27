#include<bits/stdc++.h>
using namespace std;
int main()
{

    string name;
    long long phone;
    double cheakin,cheakout;
    char nhost[40];
    char addressvisited[50];
    //name= name of visiter, cheak in= cheak in time,n host=name of host.
    //phone=visiter phone number, address visited=address visited.
    cin>>name;
    cin>>phone;
    cin>>cheakin;
    cin>>nhost;
    cin>>addressvisited;
    cout<<"SMS"<<endl;
    cout<<"name is: "<<name<<endl<<"phone number is: "<<phone<<endl;
    cout<<"cheak in time: "<<cheakin<< " ";
    cout<<"address visited is: "<<addressvisited;
    cout<<"when leaving"<<endl;
    cout<<"enter cheak-out-time: "<<cheakout;
    cout<<"sending mail to the guest"<<endl;
     cout<<"name is: "<<name<<endl<<"phone number is: "<<phone<<endl;
    cout<<"cheak in time: "<<cheakin<< " ";
    cout<<"address visited is: "<<addressvisited;
    cout<<"cheakout time: "<<cheakout;

}
