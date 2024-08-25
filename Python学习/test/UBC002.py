def solve():
    t = int(input())
    results = []
    
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        
        # Sort the array to maximize deletions
        a.sort(reverse=True)
        
        h = 1
        count = 0
        while h <= len(a):
            H = a[h - 1]
            k = len(a)
            if H > k:
                break
            a = a[:H-1] + (a[H:] if H < k else [])
            count += 1
            h = H
        
        results.append(count)
    
    for result in results:
        print(result)

# Call the solve function to execute the program
solve()