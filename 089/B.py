N=input()
array=input().split()
temp=[]
c=0
for i in array:
    if (i in temp):
        continue
    else:
        temp.append(i)
        c+=1
if (c==3):
    print('Three')
else:
    print('Four')
