import time

def no_three_digits_sum_lt_9(size):
    b = [[9-i-j for j in range(10-i)] for i in range(10)]
    for count in range(4, size+1):
        c = [[sum(b[m2][i] for m2 in range(10-i-j)) for j in range(10-i)] for i in range(10) ]
        b = c
    return sum(sum(x) for x in b)

def euler164():
    return no_three_digits_sum_lt_9(20)

if __name__ == '__main__':
    a = time.time()
    print(euler164())
    print ("time elapsed: " ,((time.time()-a)*1000))
