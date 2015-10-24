t=input()
while(t):
	t-=1
	s=raw_input()
	s=s.split()
	a=int(s[0])
	b=int(s[1])

	if(a==b or a-b==2):
		if(a&1):
			print a+b-1
		else:
			print a+b
	else:
		print "No Number"
