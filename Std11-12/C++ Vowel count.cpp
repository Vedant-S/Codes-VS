#include <iostream>
#include <string.h>
using namespace std;
int main()
{   
    char ch[100];
    int n,i,count=0;
    cout<<"Enter any string\n";
    gets(ch);
    n=strlen(ch);
    for(i=0;i<n;i++)
    {
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U')
        {
            count++;
       }
    }
    cout<<count;
    return 0;
}
