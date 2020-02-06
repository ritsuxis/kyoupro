N = int(input())

def dfs(s):
    if int(s) > N:
        return 0
    ret = 1 if all(s.count(c) > 0 for c in '753') else 0 
    # c in '753'はc = {7, 5, 3}と見て、それぞれの文字になるのでall(s.count(c))で全てが0より大きければいい
    for c in '753':
        ret += dfs(s + c)
    return ret

print(dfs('0'))