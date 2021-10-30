def palindrome(s):
    s=s.replace(" ",'')
    reverse=s[::-1]
    if s==reverse:
        return True
    else:
        return False
