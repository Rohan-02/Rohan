l=int(input())
for i in range(l):
    a=input()
    sum=0
    for i in range(0,l//2):
        sum=sum+abs(ord(a[i])-ord(a[-1-i]))
    print(sum)
