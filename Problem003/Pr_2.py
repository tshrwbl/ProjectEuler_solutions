# The prime factors of 13195 are 5, 7, 13 and 29.
# What is the largest prime factor of the number 600851475143 ?


def prime(val):
    if val % 2 == 0:
        return False
    for i in range(3,val,2):
        if val % i == 0:
            return False
    return True

for i in range(3,600851475143,2):
    if 600851475143 % i == 0:
        if prime(600851475143//i):
            print("ans " , 600851475143//i)