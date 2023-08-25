s = input("Enter a String: ")
ans = ''
for i in s:
    if(i.isalpha()):
        if(i.isupper()):
            ans += i.lower()
        else:
            ans += i.upper()
    else:
        ans += i

print("ToggleCase: ", ans)
