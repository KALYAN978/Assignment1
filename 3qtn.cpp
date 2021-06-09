/* 1. You are given a number n.
        2. You've to create a pattern of * and separated by tab as shown in output format.
 
Input :  5

Output: 
				*	
			*	*	
		*	*	*	
	*	*	*	*	
*	*	*	*	*            */

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++)
            cout<<" ";
            for(j=1;j<=i;j++)
            {
                cout<<"*";
            }
            cout<<"\n";
    }
    return 0;
}