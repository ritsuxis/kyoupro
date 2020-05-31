s = input()
t = input()
s_l = s.lower()
t_l = t.lower()
if (s == t):
    print("same")
elif (s_l == t_l):
    print("case-insensitive")
else:
    print("different")
