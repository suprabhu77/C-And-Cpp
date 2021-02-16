name = "kanak"
i=0
j=len(name)-1
while(i<j):
    if(name[i]!=name[j]):
        print("Not palindrome")
        break
    i+=1;
    j-=1;