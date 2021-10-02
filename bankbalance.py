class Bank:
    
    def __init__(self,owner,balance):
        self.owner=owner
        self.balance=balance
        
    def deposit(self,d):
        self.balance=d+self.balance
        print("amount : {}".format(d))
        print("deposit accepted!!")
        return self.balance
    
    def withdraw(self,w):
        if w>self.balance:
            print("amount has exceeded the limit!!")
            print('balance : {}'.format(self.balance))
        else:
            self.balance= self.balance-w
            print("amount withdrawn : {}".format(w))
            print("withdrawal completed!!")
            return self.balance
        
    def __str__(self):
        return (f"Account owner : {self.owner} \nAccount balance : {self.balance}")
