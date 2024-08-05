def sum_digits(number):
    number = str(number)
    suma = 0
    for i in number:
        if i.isdigit():
            suma += int(i)
    return suma