//SHIFATPREET SINGH
//24070123098
//ENTC B1
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"ENTER THE FIRST NUMBER a :"<<endl;
    cin>>a;
    cout<<"ENTER THE FIRST NUMBER b :"<<endl;
    cin>>b;
    int bitwise_and=a&b;
    int bitwise_or=a|b;
    int bitwise_xor=a^b;
    int bitwise_not=~b;
    int leftshift=a<<2;
    int rightshift=3>>a;
    cout<<"AND :"<<bitwise_and<<endl;
    cout<<"OR :"<<bitwise_or<<endl;
    cout<<"XOR :"<<bitwise_xor<<endl;
    cout<<"NOT :"<<bitwise_not<<endl;
    cout<<"leftshift :"<<leftshift<<endl;
    cout<<"rightshift :"<<rightshift<<endl;
    return 0;
}
/*ENTER THE FIRST NUMBER a :
5
ENTER THE FIRST NUMBER b :
9
AND :1
OR :13
XOR :12
NOT :-10
leftshift :20
rightshift :0*/