import sys
input = sys.stdin.readline

num1 = int(input())
arr1 = list(map(int, input().split()))
arr1.sort()

num2 = int(input())
arr2 = list(map(int, input().split()))

for i in arr2:
    start = 0
    end = num1 - 1
    target = i
    answer = 0

    while start <= end:
        mid = (start + end) // 2

        if target == arr1[mid]:
            answer = 1
            break
        elif target > arr1[mid]:
            start = mid + 1
        else:
            end = mid - 1

    print(answer, end=' ')
