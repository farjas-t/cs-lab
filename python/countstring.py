str=input("Enter a string : ")
cupr=0
cdgt=0
for i in str:
    if (i.isupper()):
        cupr+=1
    if(i.isdigit()):
        cdgt+=1

print("Number of words : ",len(str.split()))
print("Uppercase Letters : ",cupr)
print("Digits : ",cdgt)