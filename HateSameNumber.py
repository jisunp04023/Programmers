def solution(arr):
    if not len(arr):
        return []
    
    f = arr[0]
    a = [f]
    
    for i in range(1, len(arr)):
        if f != arr[i]:
            f = arr[i]
            a.append(f)
    return a
