A, B, K = map(int, input().split())

for i in range(A, min(B + 1, A + K)):
    if i < A + K:
        print(i)

for i in range(max(B - K, A + K), B + 1):
    if i > B - K:
        print(i)
