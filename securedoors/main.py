N = int(input())

log = dict()

for _ in range(N):
    status, person = input().split()

    if person not in log:
        log[person] = status
        if status == "entry":
            print(person + " entered")
        else:
            print(person + " exited (ANOMALY)")
            del log[person]
    else:
        if log[person] == status:
            print(person + " entered (ANOMALY)")
        else:
            print(person + " exited")
            del log[person]
