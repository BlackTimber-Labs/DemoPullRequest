try: 
    import time
except Exception as e:
    print("some import missing{}".format(e))


def countdown(t):
    while t:
        mins,sec = divmod(t,60)
        timer = '{:02d}:{:02d0}'.format(mins,sec)
        print(timer , end = "\n")
        time.sleep(1)
        t -=1
    print("\n fire in the hole")

t = input("enter time in second: ")
countdown(int(t))