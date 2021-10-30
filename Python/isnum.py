def user_choice():
    choice='wrong'
    
    while choice.isdigit()==False:
    
        choice = input("please enter a number")
        if choice.isdigit()==False:
            print("its not a digit")
    
    return int(choice)
