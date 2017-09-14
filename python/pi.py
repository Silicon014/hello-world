pi = 3
sqrt = 1
count = 0
k = 0
def fac(n):
	if n == 0:
		return 1
	else:
		recurse = fac(n-1)
		result = n * recurse
		return result
while True:
	item_a = fac(k*4)*(1103 + 26390*k)
	item_b = (fac(k)**4)*(396**(4*k))
	item = item_a/item_b
	count = count + item
	k = k + 1
	sqrt = (sqrt + 2 / sqrt) / 2
	pi_post = pi
	#pi = 1/(((2*sqrt)/9801)*count)
	#test = abs(pi - pi_post)
	#if test < 1e-15:
	#	break
	print(k)
	print(item)
	print(sqrt)
	print(count)
	if k > 10:
		break
#print(pi)

