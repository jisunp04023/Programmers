def solution(genres, plays):
    l = {}
    s = {}
    for i, (g, p) in enumerate(zip(genres, plays)):
        if g in l.keys():
            l[g].append([p, i])
            s[g] += p
        else:
            l[g] = [[p, i]]
            s[g] = p
    
    for i in l:
        l[i].sort(key = lambda x : (-x[0], x[1]))
    
    s = sorted(s.items(), key = lambda x : -x[1])
    
    genre = list(i[0] for i in s)
    
    ret = []
    
    for i in genre:
        for j in range(min(2, len(l[i]))):
            ret.append(l[i][j][1])
        
    return ret
  
