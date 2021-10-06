# Name : Himanshu
# Roll No. : CS20B1097

'''
Question 40.
Write a program to multiply two matrices (Assume they are compatible).
'''

def multiplyMatrices(mat1, mat2):
    result = [[0, 0, 0],
              [0, 0, 0],
              [0, 0, 0]]
    
    for i in range(0, 3):
        for j in range(0, 3):
            for k in range(0, 2):
                result[i][j] += mat1[i][k] * mat2[k][j]
    
    print(result)

#example matrices
mat1 = [[1, 2],
        [3, 4],
        [5, 6]]

mat2 = [[1, 2, 3],
        [4, 5, 6]]

multiplyMatrices(mat1, mat2)
