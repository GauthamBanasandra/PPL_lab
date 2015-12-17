a=(1, 2, 3)
b=(1, 2, 3)
print(id(a)==id(b)) #False

a=1
b=1
print(id(a)==id(b)) #True

a=[1, 2, 3]
b=[1, 2, 3]
print(id(a)==id(b)) #False

a=b
print(id(a)==id(b)) #True
a[2]=4
print('a=', a,'\nb=',b) #3 changes in b as well

a=[1, 2, 3]
b=a[:]
print(id(a)==id(b)) #False
a[2]=4
print('a=', a,'\nb=',b) #3 doesn't change in b

a=[1, [2, 3], 4]
a=b
print(id(a)==id(b)) #True

a=[1, [2, 3], 4]
a=b[:]
print(id(a)==id(b)) #False

import copy
b=copy.deepcopy(a)
print(id(a)==id(b)) #True
a[2]=4
print('a=', a,'\nb=',b) #3 doesn't change in b

