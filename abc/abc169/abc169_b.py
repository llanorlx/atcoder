N = int(input())
A = list(map(int, input().split()))

ans = 1

for a in sorted(A):
    ans *= a
    if ans > 10**18:
        ans = -1
        break

print(ans)
