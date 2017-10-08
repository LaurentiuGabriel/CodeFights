//Solution for the task from the following link: https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/tutorial/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    unsigned long long int a;
    unsigned long long int b;
    unsigned long long int c;
    unsigned long long int m;
    unsigned long long int temp;
    unsigned long long int maxCondition=10;
    unsigned long long int temp1;
    int gcd=0;

    for(int i=0;i<=9;i++){
        maxCondition*=10;
            }
    while(true){
        cin>>temp;
        if((temp>=1)||(temp<=maxCondition)){
            a=temp;
            break;
        }
        
    }
        while(true){
        cin>>temp;
        if((temp>=1)||(temp<=maxCondition)){
            b=temp;
            break;
        }
        
    }
            while(true){
        cin>>temp;
        cin>>temp1;
        for(int k=1;k<=temp&&k<=temp1;k++){
            if(temp%k==0&&temp1%k==0){
                gcd=k;
            }
        }
        if(((temp>=1)||(temp<=maxCondition))&&((temp1>=1)||(temp1<=maxCondition))&&(gcd==1)){
            c=temp;
            m=temp1;
            break;
        }
        
    }

        
    
    long long int result=0;
    signed long long int numerator=0;
    numerator=pow(a,b);
    long long int fraction=0;
    fraction=numerator/c;
    result=fraction%m;
    
    
    cout <<result<< endl;
    return 0;
}
