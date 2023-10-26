from collections import deque
def solution(s):
    q = deque(s)
    
    s = 0
    
    while len(q) > 0:
        if s < 0:
            return False
        tmp = q.popleft()
        if tmp == '(':
            s += 1
        else:
            s -= 1
    
    if s == 0:
        return True
    else:
        return False
        
