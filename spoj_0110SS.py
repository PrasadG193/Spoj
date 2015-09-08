#* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
#* Author : Prasad J Ghangal					*
#* Title : Spoj-IWGBS-0110SS 					*
#* Algorithm : Dynamic Programming				*
#* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
a=[0]*10001
n=input()
a[1]=2
a[2]=3
for i in xrange(3,n+1):
	a[i]=a[i-1]+a[i-2]
print a[n]
