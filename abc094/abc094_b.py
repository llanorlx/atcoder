N, M, X = map(int, input().split())
A = list(map(int, input().split()))
l = 0
r = 0

for i in range(M):
    if A[i] < X:
        l += 1
    else:
        r += 1

print(min(l, r))
