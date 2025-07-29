def categorize_numbers(numbers):
    d1 = {}
    p = []
    n = []
    z = []
    for i in numbers:
        if(i < 0):
            n.append(i)
            d1['negative'] = n
        elif(i > 0):
            p.append(i)
            d1['positive'] = p
        else:
            z.append(i)
            d1['zero'] = z
    return d1
numbers = [3, -1, 0, 7, -5, 2, 0, -8]
result = categorize_numbers(numbers)
print(result)