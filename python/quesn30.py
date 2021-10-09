# Name : Himanshu
# Roll No. : CS20B1097

'''
Question 30. 
For a given array count combination of pairs of (x,y) whose sum is N.
'''

def countPairs(arr, size, N):
    noOfPairs=0
    for i in range(0, size):
        for j in range(i+1, size):
            if arr[i] + arr[j] == N:
                noOfPairs += 1

    return noOfPairs

# example array
arr = [5, 3, 8, 1, 9, -2]
size = len(arr)
# value of N
N = 6
print(countPairs(arr, size, N))
