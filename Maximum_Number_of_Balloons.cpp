#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    string str;
    std::cin>>str;
    int b=0,a=0,l=0,o=0,n=0;
    for(char ch:str)
    {
        if(ch=='b') b++;
        if(ch=='a') a++;
        if(ch=='l') l++;
        if(ch=='o') o++;
        if(ch=='n') n++;
    }
    l=l/2;
    o=o/2;
    int k=min({b,a,l,o,n});
    std::cout<<k;
}