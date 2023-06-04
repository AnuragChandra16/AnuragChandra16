import numpy as np
a  = [98,54,345,53,54,5]
b=np.array(a)
#print(b.ndim)
#b=a[2:6]# slicing 
b1=b.reshape(2,3)
#np.random.seed(2)
'''c=np.random.randint(1,100,5)
print(c)'''
'''row=int(input())
col=int(input())
matrix=[]
for i in range(row):
    a=[]
    for i in range(col):
        b=int(input())
        a.append(b)
    matrix.append(a)
arr=np.array(matrix)
for i in  range(row):
    for j in range(col):
        print(arr[i,j],end=" ")
    print()'''
c=b1[0:1,0:3]
print(c)
import numpy as np
'''a=[[21,4],[5,7],[12,8],[0,45],[0,-9]]
b=np.array(a)
print(b.shape)
print(b)
print(b.ndim)'''
#a1=np.ones((9,2))
#print(a1)
#a2=np.eye(9,9)
#print(a2)
#a3=np.diag([3,4,5,6,7,8,9])
#print(a3)
a=[[5,7],[45,22],[0,8],[9.0]]
b=np.array(a)
print(b)
#c=b.reshape(2,2)
#print(c)