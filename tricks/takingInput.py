
#? Take multiple number as inputs for an array
n = int(input())
 
# input the array
arr = [int(x) for x in input().split()]


#? Faster then input() and print()
from sys import stdin, stdout 
n = stdin.readline()
stdout.write('Hello World')

#? use stdin without hassle
import sys
def get_ints(): return map(int, sys.stdin.readline().strip().split())
a,b,c,d = get_ints()

#? use stdin to take multiple inputs for array
import sys
def get_ints(): return list(map(int, sys.stdin.readline().strip().split()))
arr = get_ints()