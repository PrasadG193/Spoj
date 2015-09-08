
#* Author : pg_193						*
#* Title : Spoj-IITWPC4B	 				*
#* Category : 							*
#* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **

t=input()
while(t):
	t-=1
	n=input()
	if(n%2):
		r=(n+3)*(n+3)
		if(r%48>24):
	  		print r/48+1
		else:
	  		print r/48
	else:
		r=n*n
		if(r%48>24):
	  		print r/48+1
		else:
	  		print r/48
