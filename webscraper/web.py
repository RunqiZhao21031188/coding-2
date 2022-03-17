#!/usr/bin/env python
# coding: utf-8

# In[30]:


import requests

base_url = 'https://fanyi.baidu.com/sug' #This is a website for looking up the meaning of English words

word = input('Please enter the English words请输入英语：')
data = {
    'kw': word
}
headers = {          #find url and location/element
    'content-length': str(len(data)),
    'content-type': 'application/x-www-form-urlencoded; charset=UTF-8',
    'referer': 'https://fanyi.baidu.com/',
    'x-requested-with': 'XMLHttpRequest'
}
response = requests.post(base_url, headers=headers, data=data)   #enter the element

translate=''
for i in response.json()['data']:
    translate+=i['v']
print(word+'‘s meaning is英文意思是：')
print(translate)




# In[ ]:





# In[ ]:





# In[ ]:





# In[ ]:





# In[ ]:





# In[ ]:




