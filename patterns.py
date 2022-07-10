def pattern4(n):
     k = 2 * n - 2
     for i in range(0, n):
          for j in range(0 , k):
               print(end=" ")
          k = k - 1
          for j in range(0 , i + 1 ):
               print("* ", end="")
          print("\r")
     k = n - 2
     for i in range(n , -1, -1):
          for j in range(k , 0 , -1): 
               print(end=" ")
          k = k + 1
          for j in range(0 , i + 1): 
                print("* ", end="")
          print("\r")
 
pattern4(7)
def pattern3(n):
    for i in range(n):
        for j in range(n):
            if i + j == 2 or i - j == 2 or i + j == 6 or j - i == 2:
                print("*", end="")
            else:
                print(end=" ")
        print()
pattern3(5)
def pattern2(n):
    for i in range(1, n + 1):
        for j in range(1,n + 1):
            if(i == 1 or i == n or j == 1 or j == n):
                print('*',end=" ")
            else:
                print(" ",end=" ")
        print()
pattern2(5)
def pattern1(r):
    k = 2 * r - 2
    for i in range(r, -1, -1):
        for j in range(k, 0, -1):
            print(end=" ")
        k = k + 1
        for j in range(0, i + 1):
            print("*", end=" ")
        print(" ")
pattern1(5)

