N = int(input())
h = list(map(int, input().split()))

ans = h[0]

for i in range(1, N):
    ans += max(h[i] - h[i - 1], 0)

print(ans)
