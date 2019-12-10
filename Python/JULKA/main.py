iter = int(input())
A = [None]*iter
B = [None]*iter
for i in range(iter):
    A[i] = int(input())
    B[i] = int(input())

for i in range(iter):
    print((A[i]+B[i])/2)
    print((abs(A[i]-B[i])/2))
