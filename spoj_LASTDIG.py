t=input()
while(t):
	t-=1
	s=raw_input()
	s=s.split()
	a=s[0]
	b=(int)(s[1])
	a=(int)(a[-1])
	if b==0:
		print 1
		continue
	if(a==5 or a==6):
		b=1
	elif(a==2 or a==3 or a==7 or a==8):
		b=b%4
		if(b==0):
			b=4
	else:	
		b=b%2
		if(b==0):
			b=2
	print pow(a,b)%10
