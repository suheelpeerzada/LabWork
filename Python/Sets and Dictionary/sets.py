s = {2,3,1,5,6,0,8}
s2 = {7,4,9,0,7,5,12,54}
# print(s.union(s2))
# print(s.intersection(s2))
# print(s.difference(s2))
# s.remove(2)
# print(s)
# s.clear()
# print(s)
s3 = s.copy()
s4 = s
s.update(s2)
print(s3)
print(s4)