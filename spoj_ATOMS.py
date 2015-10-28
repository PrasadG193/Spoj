t=input()
while(t):
 count=0
 s=raw_input()
 s=s.split()
 n=(int)(s[0])
 k=(int)(s[1])
 m=(int)(s[2])
 n*=k
 while(n<=m):
  count+=1
  n*=k
 print count
 t-=1
