n1 = int(input())
n2 = int(input())

distance = n2 - n1

if distance == -180:
    distance = -distance
elif (distance > 180):
    distance -= 360
elif (distance < -180):
    distance += 360

print(distance)


