/* You are given a string that contains only lowercase and uppercase alphabets.
You have to toggle the case of every character of the given string 
Input : ProGraMMer
Output: pROgRAmmER  */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[100];
    int i;
    cout<<"Enter the String: ";
    gets(str);
  	for (i = 0; str[i]!='\0'; i++){
    	if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
            }else if(str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - 32;
  	  	    }		
  	}
      
  	cout<<"\nToggoled string: "<<str<<endl;

      
      return 0;
  	}