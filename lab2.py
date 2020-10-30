import math
a = float(input('Введите значение а:'))
b = float(input('Введите значение в:'))
c = float(input('Введите значение c:'))
d = float(input('Введите значение d:'))
if a == b or a == -b:
    print('Деление на ноль')
elif math.sin(c) == 0:
    print('Деление на ноль')
elif d<0:
    print("Логарифм не існує")
else:
    y=math.log(d)/(abs(b*b-a*a)*math.sin(c))
    print('Область визначення:(0;+infinity)')
    print("Значение функции:", y)
