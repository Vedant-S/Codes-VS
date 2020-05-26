# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""
x=int(input())
for w in range(x):
    y=int(input())
    a=[]
    for i in range(y):
        a.append(input().split(" "))
    b=[]
    for i in range(0,len(a[0])):
        p=[]
        for j in a:
            p.append(j[i])
        b.append(p)
    c=0
    for i in range(0,len(a)):
        for j in range(0,len(a[i])):
            if(i==j):
                c=c+int(a[i][j])
    k=0
    for i in a:
        if(len(i)!=len(set(i))):
            k=k+1
    l=0
    for i in b:
        if(len(i)!=len(set(i))):
            l=l+1
    print("Case #"+str(w+1)+":",c,k,l)

