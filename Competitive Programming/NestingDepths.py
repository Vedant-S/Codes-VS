# -*- coding: utf-8 -*-
"""
Created on Tue May 26 18:22:27 2020

@author: KIIT
"""
def d(f):
    x=input()
    o=int(x[0])
    c=0
    s='('*o
    for i in range(0,len(x)):
        if(int(x[i])==o):
            o=o;c=c;
            s=s+x[i]
        elif(int(x[i])>o):
            a=int(x[i])-o
            s=s+'('*a
            o=o+a
            s=s+x[i]
        else:
            a=o-int(x[i])
            s=s+')'*a
            o=o-a
            s=s+x[i]
    s=s+')'*o
    print("Case #"+str(f)+":",s)
k=int(input())
for i in range(k):
    d(i+1)
