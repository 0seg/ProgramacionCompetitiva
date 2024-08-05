def max_product(a):
    max2 = []
    for i in range(2):
        max0 = max(a)
        max2.append(max0)
        a.remove(max0)

    return max2[0]*max2[1]