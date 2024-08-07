def solve():
    import sys
    input = sys.stdin.read
    data = input().split()
    
    index = 0
    t = int(data[index])
    index += 1
    results = []
    
    for _ in range(t):
        n = int(data[index])
        d = int(data[index + 1])
        index += 2
        
        racks = list(map(int, data[index:index + n]))
        index += n
        
        counter = 0
        while d != 0:
            counter += 1
            next_d = racks[d - 1]
            racks[d - 1] = d
            d = next_d
        
        results.append(counter)
    
    for result in results:
        print(result)

solve()