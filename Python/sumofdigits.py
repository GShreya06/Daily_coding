n=int(input("Enter a number: "));
rev=0;
s1=0;
while(n>0):
    a=n%10;
    rev=(rev*10)+a;
    s1+=a;
    n=n//10;
print("Reverse of digits is:",rev);
print("Sum of Digits is:",s1);
