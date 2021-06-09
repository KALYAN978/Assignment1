/* Given a number x, determine whether the given number is Armstrong number or not. A positive integer 
of n digits is called an armstrong numner of order n(order is number of digits)if.
abcd... = pow(a,n) + pow(b,n) + pow(c,n) + pow(d,n) + ....

Input : 1253
Output : No
1253 is not a Armstrong Number
1*1*1*1 + 2*2*2*2 + 5*5*5*5 + 3*3*3*3 = 723

Input : 1634
Output : Yes
1*1*1*1 + 6*6*6*6 + 3*3*3*3 + 4*4*4*4 = 1634 */

#include<bits/stdc++.h>
using namespace std;

int power(int x, int y){
    if( y == 0)
    {
        return 1;
    }
    if(y%2 == 0){
        return power(x, y/2)*power(x,y/2);
    }
    return x*power(x,y/2)*power(x,y/2);
}

int order(int x)
{
    int n=0;
    while(x){
        n++;
        x = x/10;
    }
    return n;
}

bool armstrong(int x)
{
    int n=order(x);
    int temp=x, sum=0;
    while(temp){
        int r = temp%10;
        sum += power(r,n);
        temp = temp/10;
    }
    return (sum == x);
}

int main(){
    int x=1253;
    cout<<armstrong(x)<<endl;
    x=1634;
    cout<<armstrong(x)<<endl;
    
    return 0;
}


