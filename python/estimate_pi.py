#estimate_pi.py

def fact (k):
	if k > 0:
		return k * fact (k - 1)
	else:
		return 1
def count(k):
	up = fact(4*k)*(1103 + 26390 * k)
	down = fact(k)**4*396**(4*k)
	up = up * 1.0
	down = down * 1.0
	return up / down
k = 0
item = count(k)
summed = 0 + item
#print (summed)
while item >= 1e-15:
	k = k + 1
	item = count(k)
	summed = summed + item
#print (summed)
import math
pi = (2 * math.sqrt(2)) / 9801
pi = pi * summed
pi = 1.0 / pi
print("pi = ",end="")
print (pi)
print("math.pi = ",end="")
print (math.pi)
#print (abs(pi - math.pi)) 
