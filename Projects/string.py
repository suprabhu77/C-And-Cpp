testcase = int(input())
while(testcase):
    string = str(input())
    # print(string)
    print(hash)
    for i in range(len(string)):
        first = string[i]
        print(first)
        j=i+1;
        k=0;
        while(j<=len(string)):
            # print((first == string[j]))
            if(first == string[j]):
                k=k+1
            j=j+1
        print(k)
    testcase = testcase-1