#dictionary

dict1 = {'a':1, 'b':2, 'c':3}
print("Initial dictionary: ", dict1)
dict1['d'] = 4
print("Dict1 after adding d: ", dict1)
dict1['b'] = 6
print("After changing b: ", dict1)
if 'c' in dict1:
    del dict1['c']
print("After deleting c: ", dict1)
dict1.pop('d', None)
print("After pop: ", dict1)