import random as r
list1=[]
list2=[]
bot1 =[]
list3=[]
for i in range(50):
    bot = r.randint(100, 999)
    bot1.append(bot)
print(bot1)
kirit = r.choice(bot1)
list2.append(kirit)
print(list2)
for i in bot1:
    if i == list2[0]:
        break
    elif i != list2[0]:
        if i %2==0:
            
            list3.append(i)
print(list3)
