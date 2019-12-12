import math

while True:
    input_ = input()
    if input_ == '0':
        break
    
    x1, y1, x2, y2, p = [float(i) for i in input_.split()]

    x = abs(x1 - x2) ** p
    y = abs(y1 - y2) ** p
    q = p ** -1
    dist = (x + y) ** q
    print(dist)