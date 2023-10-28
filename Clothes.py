from math import prod

def solution(clothes):
    a = {}
    for i in clothes:
        k = i[1]
        
        if k in a.keys():
            a[k] += 1
        else:
            a[k] = 2

    return prod(a.values()) - 1
