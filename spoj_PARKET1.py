import math
a, b = map(int, raw_input().split())
q = a/2 + 2
d = int(math.sqrt(q*q - 4*(a+b)))
print (q + d)/2, (q - d)/2

