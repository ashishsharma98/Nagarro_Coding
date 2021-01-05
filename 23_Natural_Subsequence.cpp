/*
Natural Subsequence:
-------------------

Find the Length of Longest Natural Sorted Subsequence already present in given string.

Inpu1 : abzd
Output: 3
Explaination: 
abd abz are two longest Natural Sorted Subsequence.

Input 2: bcdabdz
Output: 4
Explaination:
bcdz and abdz are two longest subsequence.
*/

#include<iostream>
using namespace std;

int LongestSorted(string str) //abzd
{
    int n=str.length();  // 4
    int list[n];   // 1 2 3 3
    list[0]=1;  //list[]={1,2,1}

    for(int i=0;i<n;i++)
    {
        list[i]=1;
        for(int j=0;j<i;j++)
        {
            if(str[i]>str[j] && list[i]<list[j]+1)
            {
                list[i]=list[j]+1;
            }
        }
    }
    int max=list[0];
    for(int i=0;i<n;i++)
    {
        if(list[i]>max)
        {
            max=list[i];
        }
    }
   
//    for(int i=0;i<n;i++)
//    {
//        cout<<list[i]<<" ";
//    }
return max;
}

int main()
{
    string str;
    cin>>str;

    cout<<LongestSorted(str);
}