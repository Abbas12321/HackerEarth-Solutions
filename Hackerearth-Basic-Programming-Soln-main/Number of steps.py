import math

num_of_nums = int(input())

a_s = list(map(int, input().split()))
b_s = list(map(int, input().split()))

operations = 0
m = min(a_s)
while not all([a_s[0] == tmp for tmp in a_s]):
    if m < 0:
        print(-1)
        exit(0)
    for i, (a, b) in enumerate(zip(a_s, b_s)):
        if b == 0 and m != a:
            print(-1)
            exit(0)
        elif b == 0 and m == a:
            continue

        operations_to_min = int(math.ceil((a - m) / b))
        operations += operations_to_min
        a_s[i] = a - operations_to_min * b
    m = min(a_s)
print(operations)
