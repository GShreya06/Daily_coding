def gcd(num1,num2):
    if num1 == 0:
        return num2
    return gcd(num2 % num1, num1)
def lcm(a,b):
    return (a / gcd(a,b))* b

num1=int(input("Enter First number"));
num2=int(input("Enter Second number"));
print('LCM of', num1, 'and', num2, 'is', lcm(num1,num2))
    
