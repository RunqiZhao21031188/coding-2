#!/usr/bin/env python
# coding: utf-8

# In[15]:


#suma=1，2，5，13，34,(x)
#find the law，find out 'suma' and 'x'

sum=1 #assume begin with 1
i=count=0
lis=[1]#define sum
while count <10:    
    while i < len(lis):    
        sum =sum+ lis[i]   #+1
        i+=1   
    lis.append(sum)   
    i=0  #begin with first one
    count+=1  #new one
    print(lis)
    
    


# In[ ]:





# In[ ]:




