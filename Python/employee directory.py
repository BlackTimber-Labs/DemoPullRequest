#Program to find the phone number of an employee
phone=dict()
i=1
n=int(input("Enter the no. of entries:"))
while i<=n:
    a=input("Enter the phone number:")
    b=input("Enter name:")
    phone[b]=a
    i=i+1
l=phone.keys()
x=input("Enter the name to be searched:")
for i in l:
    if i==x:
        print(x,"phone number:",phone[i])
        break
else:
    print(x,"is not an employee.")

