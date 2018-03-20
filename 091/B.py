N=int(input())
s=[input() for i in range(N)]
M=int(input())
t=[input() for k in range(M)]
mx=[]
c=[]
for j in range(N):
    if(s[j] not in c):
        c.append(s[j])
for j in range(M):
    if (t[j] not in c):
        c.append(t[j])
for j in range(len(c)):
    mx.append(s.count(c[j])-t.count(c[j]))
if(max(mx)<0):print(0)
else:print(max(mx))