import sys
sys.setrecursionlimit(10**6)

def print_recursively(v, strings, idx):
    print(strings[idx], end='')
    for i in v[idx]:
        print_recursively(v, strings, i)

n = int(input())
strings = ['' for i in range(n)]
v = [[] for _ in range(n)]

for i in range(n):
    strings[i] = input()

# We are concatenating idx2 to idx2.
idx1 = 0
idx2 = 0
last_idx = 0
for i in range(n - 1):
    idx1, idx2 = [int(i) for i in input().strip().split(' ')]

    # Converting to 0 indexing
    idx1 -= 1
    idx2 -= 1
    v[idx1].append(idx2)
    last_idx = idx1

print_recursively(v, strings, last_idx)
print()