from collections import deque
T = int(input())

if T in range(0, 1001):
    for _ in range(T):
        N, K = map(int, input().split())
        B = deque(input())
    
        decimal_values = []
    
        for _ in range(N):        
            C= ""
            C = C.join((B))
    
            # calculate decimal value
            res = int(C, 2) 
                
            if(res in decimal_values):
                break
            else:
                decimal_values.append(res)
                # cyclic shift
                B.rotate(-1)
                del(C)
                
        max_value_pos = decimal_values.index(max(decimal_values)) 
        value = max_value_pos + (len(decimal_values) * (K-1))
        print(value)
        del(B, decimal_values, value)
