s1 = {2,1,45,23,6}
s2 = {1,2, 'a', 'c'}
# s1.update(s2)
# s3 = s1.copy()
# s1.add(10)
# print(s3)
"""union
    intersection
    difference
    subset
    superset"""
# print(s1.issuperset(s2))
s3 = s2.difference(s1)
print(s3)