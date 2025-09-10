#include<iostream>
#include<string>
using namespace std;

int search(string s1, string s2) 
{
    int n = s1.length();
    int m = s2.length();
    for(int i=0; i< (n-m); i++)
        if(s1.substr(i, m) == s2)
            return i;
    return -1;
}

int main()
{
    string str1, str2;
    cout<<"Enter string: ";
    getline(cin, str1);
    cout<<"Enter substring to be searched: ";
    getline(cin, str2);
    int index = search(str1, str2);
    if(index == -1)
        cout<<"Substring not found in main string";
    else
        cout<<"Substring found at index: "<<index;
    return 0;
}