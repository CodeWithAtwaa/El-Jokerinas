
for _ in range(int(input())):
    n = int(input())
    k = 3 * n
    for i in range(1,n+1):
        print(i, k-1, k, end=" ")
        k -= 2
    print()
