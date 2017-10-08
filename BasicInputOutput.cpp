//Solved the challenge from the following link: https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/tutorial/
#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
    int var=0;
    int temp;
    string tempString;
    while(true){
    cin>>temp;
    if((var>=0)||(var<=10)){var=temp;break;}
    else{
        cout<<"Try again! The variable should be between 0 and 10"<<endl;
    }}

    string newString;
    int stringLength=newString.size();
       while(true){
    cin>>tempString;
    if((stringLength>=1)||(var<=15)){newString=tempString;break;}
    else{
        cout<<"Try again! The string should be between 1 and 15"<<endl;
    }}

    cout << var*2<< endl;
    cout<<newString<<endl;
    return 0;
}
