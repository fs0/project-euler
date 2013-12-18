#! /usr/bin/python

def factorial(n):
  ret = n
  for i in range(1,n):
    ret *= i
  return ret

n = 40
print ( factorial(n) / ( factorial(n-n/2) * factorial(n/2) ) )
