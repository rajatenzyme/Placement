def second_third_max(l):
    ans = []
    x1 = max(l)
    l[l.index(x1)] = -99999.9999
    x2 = max(l)
    ans.append(l.index(x2))
    l[l.index(x2)] = -99999.9999
    x3 = max(l)
    ans.append(l.index(x3))
    
    return ans


l = [8, 9.5, 13, 81]
print(second_third_max(l))