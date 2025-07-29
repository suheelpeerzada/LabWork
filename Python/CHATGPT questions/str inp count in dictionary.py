#Python function that takes a string as input and returns a dictionary containing the count
def count_characters(a):
    d1 = {}
    size = 11
    len = 1
    for i in range(size):
        d1[a[i]] = len
    for i in range(size):
        for j in range(i+1, size):
            if(a[i] == a[j]):
                len+=1
                d1[a[i]] = len
        len = 1
    return d1


input_str = "hello world"
result_dict = count_characters(input_str)
print(result_dict)
