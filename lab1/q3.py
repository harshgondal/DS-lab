x=[1,2,3,4,5]
y=[6,7,8,9,10]
i=0
temp=0
z=[]
while(i<len(x)):
    temp=temp+pow(x[i]-y[i],2)
    z.append(temp)
    i=i+1
z.sort()
print(z)