from collections import deque
def solution(progresses, speeds):

    l = deque()
    for i in range(len(speeds)):
        a = 100 - progresses[i]
        tmp = a // speeds[i]
        if a % speeds[i]:
            tmp += 1
        l.append(tmp)
    
    print(l)
    ret =[]
    
    while l:
        target = l.popleft()
        cnt = 1
        
        while l and target >= l[0]:
            l.popleft()
            cnt += 1
        ret.append(cnt)
    return ret
