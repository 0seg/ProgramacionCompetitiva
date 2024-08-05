def filter_list(l):
    filtred = []
    for i in l:
        if i != str(i):
            filtred.append(i)
    return filtred


